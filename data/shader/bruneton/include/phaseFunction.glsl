#extension GL_ARB_shading_language_include : require
#include </data/shader/bruneton/include/uniforms.glsl>
#include </data/shader/bruneton/include/constants.glsl>

#ifndef PHASE_FUNCTION
#define PHASE_FUNCTION

#extension GL_ARB_shading_language_include : require
#include </data/shader/bruneton/uniforms.glsl>
#include </data/shader/bruneton/constants.glsl>

float phaseFunctionR(float mu) {
    return (3.0 / (16.0 * PI)) * (1.0 + mu * mu);
}

float phaseFunctionM(float mu) {
    return 1.5 * 1.0 / (4.0 * PI) * (1.0 - mieG*mieG) * pow(1.0 + (mieG*mieG) - 2.0*mieG*mu, -3.0/2.0) * (1.0 + mu * mu) / (2.0 + mieG*mieG);
}

#endif // PHASE_FUNCTION