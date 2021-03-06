/*
The Curie IMU library enables an Arduino or Genuino 101 to read the output of the on-board 
IMU (Inertial Measurement Unit) containing an accelerometer and a gyroscope and elaborate 
the raw data coming from it. - only compatible with Arduino or Genuino 101
 */

#include "CurieIMU.h"

void setup() {
  Serial.begin(9600); // initialize baud value
  while (!Serial);    // activate only when serial port is open

  // start the accelerometer device
  Serial.println("Starting the device...");
  CurieIMU.begin();

  // set.Accelerometer sets the range of the accelerometer as multiples of g, in this case range is 2G
  CurieIMU.setAccelerometerRange(2);
}

void loop() {
  float ax, ay, az;   //accelerometer values

  // read accelerometer measurements and scaled based on the above range (ax, ay, az)
  CurieIMU.readAccelerometerScaled(ax, ay, az);

  // print the x, y and z values (\t = seperated by tab)
  Serial.print("a:\t");
  Serial.print("x-");
  Serial.print(ax);
  Serial.print("\t");
  Serial.print("y-");
  Serial.print(ay);
  Serial.print("\t");
  Serial.print("z-");
  Serial.print(az);
  Serial.println();
}
