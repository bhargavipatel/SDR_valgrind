/**
 * @breif: AnalogSen
 * @author Bhargavi
 * @version 1.0
 * @Copyright UMD
 */
#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

explicit int AnalogSensor::Read() {
    auto readings = std::make_shared<std::vector<int>> (mSamples, 10);

    double result = std::accumulate(readings->begin(), \
                  readings->end(),  0.0) / readings->size();
    return result;
}


