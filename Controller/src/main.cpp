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