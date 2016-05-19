#pragma once

#include <texturebased/AbstractMappedHimmel.h>
#include <texturebased/texturebased_api.h>

namespace globjects {
    class Shader;
    class Texture;
}

namespace glHimmel
{

// uses method presented by Miller, Gene S. and Hoffman, Robert C. in "Illumination 
// and Reflection Maps: Simulated Objects in Simulated and Real Environments" 1984

class TEXTUREBASED_API SphereMappedHimmel : public AbstractMappedHimmel
{
public:
    SphereMappedHimmel(const bool hBand = false, const bool fakeSun = false);

    virtual ~SphereMappedHimmel();

protected:

    // AbstractHimmel interface

    std::string fragmentShaderPath() const override;

};

} // namespace glHimmel
