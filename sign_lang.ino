#include <Wire.h>

#include <MPU6050.h>

MPU6050 mpu;

// Flex pins

int flexPins[5] = {34, 35, 32, 33, 36};

void setup() {

  Serial.begin(115200);

  

  Wire.begin(21, 22);

  mpu.initialize();

}

void loop() {

  // Read flex sensors

  int flexValues[5];

  for(int i=0;i<5;i++){

    flexValues[i] = analogRead(flexPins[i]);

  }

  // Read MPU

  int16_t ax, ay, az;

  mpu.getAcceleration(&ax, &ay, &az);

  // Send data

  Serial.print(flexValues[0]); Serial.print(",");

  Serial.print(flexValues[1]); Serial.print(",");

  Serial.print(flexValues[2]); Serial.print(",");

  Serial.print(flexValues[3]); Serial.print(",");

  Serial.print(flexValues[4]); Serial.print(",");

  Serial.print(ax); Serial.print(",");

  Serial.print(ay); Serial.print(",");

  Serial.println(az);

  delay(100);

}