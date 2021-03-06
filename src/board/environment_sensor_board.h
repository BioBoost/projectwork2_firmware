#pragma once

#include "transceiver.h"
#include "sensor_data.h"
#include "temperature_humidity_sensor.h"
#include "pir_sensor.h"

class EnvironmentSensorBoard{

    public:

    EnvironmentSensorBoard(ProjectWork2::Transceiver * inputTransceiver);

    void update();
    ProjectWork2::SensorData get_data();



    private:

    ProjectWork2::Transceiver * transceiver;

    // 3 sensoren

    TemperatureHumidity * temperatureSensor;
    PIRSensor motionSensor;
    I2C sensorI2C;
};