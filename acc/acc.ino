#include <Wire.h>
#include "MPU6050.h"

MPU6050 MPU;

const int MPU_addr = 0x68;  // I2C address of the MPU-6050

unsigned long AcX, AcY, AcZ, Tmp, GyX, GyY, GyZ;

void setup(){
  MPU.initialize();
  Serial.println(MPU.getFullScaleAccelRange());
  MPU.setFullScaleAccelRange(MPU6050_ACCEL_FS_16);
  Serial.println(MPU.getFullScaleAccelRange());
  MPU.initialize();
  Serial.println(MPU.getFullScaleAccelRange());
}

void loop(){

}
