#include <Arduino.h>
bool btn0_upagain = true;
bool btn1_upagain = true;
bool btn2_upagain = true;
bool btn3_upagain = true;
bool btn4_upagain = true;

bool btn0 = false;
bool btn1 = false;
bool btn2 = false;
bool btn3 = false;
bool btn4 = false;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
}

void loop() {
  float Joy0x = float(analogRead(A0));
  float Joy0y = float(analogRead(A1));
  float Joy1x = float(analogRead(A2));
  float Joy1y = float(analogRead(A3));



  Serial.println(String(digitalRead(2))+","+String(digitalRead(3))+","+String(digitalRead(4))+","+String(digitalRead(5))+","+String(digitalRead(6))+","+String(Joy0x)+","+String(Joy0y)+","+String(Joy1x)+","+String(Joy1y)+",");

}
/*
  if(digitalRead(2) == 0 && btn0_upagain == true) {
    bool btn0 = true;
    bool btn1 = false;
    bool btn2 = false;
    bool btn3 = false;
    bool btn4 = false;

    bool btn0_upagain = false;
    //bool btn1_upagain = true;
    //bool btn2_upagain = true;
    //bool btn3_upagain = true;
    //bool btn4_upagain = true;
  }

  else if(digitalRead(3) == 0 && btn1_upagain == true) {
    bool btn0 = false;
    bool btn1 = true;
    bool btn2 = false;
    bool btn3 = false;
    bool btn4 = false;
  
    //bool btn0_upagain = true;
    bool btn1_upagain = false;
    //bool btn2_upagain = true;
    //bool btn3_upagain = true;
    //bool btn4_upagain = true;
  }

  else if(digitalRead(4) == 0 && btn2_upagain == true) {
    bool btn0 = false;
    bool btn1 = false;
    bool btn2 = true;
    bool btn3 = false;
    bool btn4 = false;
  
    //bool btn0_upagain = true;
    //bool btn1_upagain = true;
    bool btn2_upagain = false;
    //bool btn3_upagain = true;
    //bool btn4_upagain = true;
  }

  else if(digitalRead(5) == 0 && btn3_upagain == true) {
    bool btn0 = false;
    bool btn1 = false;
    bool btn2 = false;
    bool btn3 = true;
    bool btn4 = false;

    //bool btn0_upagain = true;
    //bool btn1_upagain = true;
    //bool btn2_upagain = true;
    bool btn3_upagain = false;
    //bool btn4_upagain = true;
  }

  else if(digitalRead(6) == 0 && btn4_upagain == true) {
    bool btn0 = false;
    bool btn1 = false;
    bool btn2 = false;
    bool btn3 = false;
    bool btn4 = true;

    //bool btn0_upagain = true;
    //bool btn1_upagain = true;
    //bool btn2_upagain = true;
    //bool btn3_upagain = true;
    bool btn4_upagain = false;
  }

  else {
    bool btn0 = false;
    bool btn1 = false;
    bool btn2 = false;
    bool btn3 = false;
    bool btn4 = false;
    
    bool btn0_upagain = true;
    bool btn1_upagain = true;
    bool btn2_upagain = true;
    bool btn3_upagain = true;
    bool btn4_upagain = true;
  }
  if(btn0==true) {
    Serial.println("btn0");
  }

  if(btn1==true) {
    Serial.println("btn1");
  }

  if(btn2==true) {
    Serial.println("btn2");
  }

  if(btn3==true) {
    Serial.println("btn3");
  }

  if(btn4==true) {
    Serial.println("btn4");
  }
  
}

*/
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