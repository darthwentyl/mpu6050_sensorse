#pragma once

#include <cfloat>
#include <cmath>

namespace utils
{

class AccelerometerHumanReadable
{
public:
    AccelerometerHumanReadable(const float_t scale);
    
    float_t convert(const float_t data);
    
private:
    float_t scale;
};

} // utils
