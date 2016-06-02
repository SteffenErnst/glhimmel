#version 330
#extension GL_ARB_shading_language_include : require

#include </data/shader/dither.glsl>
#inculde </data/shader/bruneton.glsl>

uniform vec4 cmn
        
uniform vec3 sun;
uniform vec3 sunr;

in vec4 v_ray;

const float ISun = 100.0;

uniform float sunScale;
uniform float exposure;

uniform vec3 lheurebleueColor; 
uniform float lheurebleueIntensity;

uniform sampler2D irradianceSampler;    // precomputed skylight irradiance (E table)
uniform sampler3D inscatterSampler;     // precomputed inscattered light (S table)
     
// inscattered light along ray x+tv, when sun in direction s (=S[L]-T(x,x0)S[L]|x0)
vec3 inscatter(inout vec3 x, inout float t, vec3 v, vec3 s, out float r, out float mu, out vec3 attenuation) {
    vec3 result;
    r = length(x);
    mu = dot(x, v) / r;
    float d = -r * mu - sqrt(r * r * (mu * mu - 1.0) + cmn[2] * cmn[2]);
    if (d > 0.0) { // if x in space and ray intersects atmosphere
        // move x to nearest intersection of ray with top atmosphere boundary
        x += d * v;
        t -= d;
        mu = (r * mu + d) / cmn[2];
        r = cmn[2];
    }
    if (r <= cmn[2]) { // if ray intersects atmosphere
        float nu = dot(v, s);
        float muS = dot(x, s) / r;
        float phaseR = phaseFunctionR(nu);
        float phaseM = phaseFunctionM(nu);
        vec4 inscatter = max(texture4D(inscatterSampler, r, mu, muS, nu), 0.0);
        if (t > 0.0) {
            vec3 x0 = x + t * v;
            float r0 = length(x0);
            float rMu0 = dot(x0, v);
            float mu0 = rMu0 / r0;
            float muS0 = dot(x0, s) / r0;

            attenuation = transmittance(r, mu, v, x0);

            if (r0 > cmn[1] + 0.01) {
                // computes S[L]-T(x,x0)S[L]|x0
                inscatter = max(inscatter - attenuation.rgbr * texture4D(inscatterSampler, r0, mu0, muS0, nu), 0.0);
            }
        }
        // avoids imprecision problems in Mie scattering when sun is below horizon
        inscatter.w *= smoothstep(0.00, 0.02, muS);

        result = max(inscatter.rgb * phaseR + getMie(inscatter) * phaseM, 0.0);
    } else { // x in space and ray looking in space
        result = vec3(0.0);
    }
    return result * ISun;
}

// direct sun light for ray x+tv, when sun in direction s (=L0)
vec3 sunColor(vec3 x, float t, vec3 v, vec3 s, float r, float mu) {
    if (t > 0.0) {
        return vec3(0.0);
    } else {
        vec3 transmittance = r <= cmn[2] ? transmittanceWithShadow(r, mu) : vec3(1.0); // T(x, xo)
        float isun = step(cos(sunScale), dot(v, s)) * ISun; // Lsun
        return transmittance * isun; // Eq (9)
    }
}


void main() {
    vec3 x = vec3(0.0, 0.0, cmn[1] + cmn[0]);
    vec3 ray = normalize(m_ray.xyz);

    float r = length(x);
    float mu = dot(x, ray) / r;
    float t = -r * mu - sqrt(r * r * (mu * mu - 1.0) + cmn[1] * cmn[1]);

    vec3 attenuation;
    vec3 inscatterColor = inscatter(x, t, ray, sunr, r, mu, attenuation); // S[L]  - T(x, xs) S[l] | xs"
    
    vec3 sunColor = sunColor(x, t, ray, sunr, r, mu); // L0


    // l'heure bleue (blaue stunde des ozons)

    // gauss between -12° and +0° sun altitude (Civil & Nautical twilight) 
    // http://en.wikipedia.org/wiki/Twilight
    float hb = t > 0.0 ? 0.0 : exp(-pow(sunr.z, 2.0) * 166) + 0.03;     // the +0.03 is for a slight blueish tint at night
    vec3 bluehour = lheurebleueIntensity * lheurebleueColor * (dot(ray, sunr) + 1.5) * hb; // * mu (optional..)

    gl_FragColor = vec4(HDR(bluehour + sunColor + inscatterColor), 1.0)    // Eq (16)
        + dither(3, int(cmn[3]));
}