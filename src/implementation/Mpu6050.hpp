#pragma once

#include <interface/SensorIfc.hpp>

#include <memory>

namespace interface
{
    class AccelerometerIfc;
    class GyroscopeIfc;
    class KalmanFilterIfc;
} // interface

namespace implementation
{
    
class Mpu6050 : 
    public interface::SensorIfc
{
public:
    Mpu6050(const uint32_t addr);
    virtual ~Mpu6050() = default;
    
    virtual void read() override;
    virtual void printRaw() override;
    virtual void printHumanReadable() override;
    virtual void printKalman() override;
    
private:
    std::unique_ptr<interface::GyroscopeIfc> gyro;
    std::unique_ptr<interface::AccelerometerIfc> acc;
    std::unique_ptr<interface::KalmanFilterIfc> kalman;
    int32_t fd;
};
    
} // implementation 
