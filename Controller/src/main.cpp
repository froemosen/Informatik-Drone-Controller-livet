#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);

}

void loop() {
  Serial.print("\n");
  Serial.print("Port 2:"+String(digitalRead(2)));
  Serial.print("\n");
  Serial.print("Port 3:"+String(digitalRead(3)));
  Serial.print("\n");
  Serial.print("Port 4:"+String(digitalRead(4)));
  Serial.print("\n");
  Serial.print("Port 5:"+String(digitalRead(5)));
  Serial.print("\n");
  // delay(2000);
}


/*
#include "BMI088.h"

float ax = 0, ay = 0, az = 0;
float gx = 0, gy = 0, gz = 0;
int16_t temp = 0;

void setup() {
  Wire.begin();
    Serial.begin(9600);
 
    while(!Serial);
    Serial.println("BMI088 Raw Data");
 
    while(1)
    {
        if(bmi088.isConnection())
        {
            bmi088.initialize();
            Serial.println("BMI088 is connected");
            break;
        }
        else Serial.println("BMI088 is not connected");
 
        delay(2000);
    }
}

void loop() {
  bmi088.getAcceleration(&ax, &ay, &az);
    bmi088.getGyroscope(&gx, &gy, &gz);
    temp = bmi088.getTemperature();
 
    Serial.print(ax);
    Serial.print(",");
    Serial.print(ay);
    Serial.print(",");
    Serial.print(az);
    Serial.print(",");
 
    Serial.print(gx);
    Serial.print(",");
    Serial.print(gy);
    Serial.print(",");
    Serial.print(gz);
    Serial.print(",");
 
    Serial.print(temp);
 
    Serial.println();
 
    delay(50);
  
}
*/