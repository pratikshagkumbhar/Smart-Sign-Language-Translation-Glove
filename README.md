# Smart Sign Language Translation Glove

## Overview

The Smart Sign Language Translation Glove is a wearable, sensor-based system designed to capture hand gestures for sign language recognition. The prototype uses an ESP32 microcontroller, five flex sensors, and an MPU6050 inertial measurement unit (IMU) to collect information about finger bending and hand movement.

The collected sensor readings can be processed to extract gesture-related features and used by a machine learning model to classify hand signs.

## Objectives

- Capture finger-bending patterns using five flex sensors.
- Measure hand acceleration and orientation-related motion using the MPU6050.
- Acquire and transmit sensor readings through the ESP32.
- Support gesture feature extraction and machine-learning-based hand sign classification.
- Explore an assistive technology approach for sign language communication.

## Hardware Components

| Component | Purpose |
|---|---|
| ESP32 | Microcontroller and sensor data acquisition |
| Five flex sensors | Measure finger bending |
| MPU6050 IMU | Capture three-axis acceleration and motion information |
| Connecting wires and glove | Hardware integration and wearable prototype |

## Technologies Used

- Embedded C/C++ and Arduino IDE
- ESP32
- MPU6050
- Flex sensors
- Sensor data acquisition and processing
- Machine learning for gesture classification

## System Workflow

1. **Sensor acquisition:** Five flex sensors capture finger-bending measurements.
2. **Motion sensing:** The MPU6050 provides three-axis accelerometer readings.
3. **Data transmission:** The ESP32 transmits the sensor readings over Serial in comma-separated format.
4. **Feature extraction:** The sensor readings can be processed to derive gesture-related features.
5. **Gesture classification:** A trained machine learning model can classify the captured gestures into their corresponding sign labels.

## Firmware

The ESP32 firmware is available in the `firmware/` directory. It reads the five flex sensor inputs and obtains accelerometer measurements from the MPU6050 over I2C.

The output contains eight comma-separated values per sample.

## Machine Learning

The project includes a machine-learning-based gesture classification component. Details such as the algorithm, training dataset, preprocessing steps, and evaluation metrics should be documented according to the implementation used in the project.



## License

This project is intended for educational and research purposes. See the `LICENSE` file for licensing terms.
