#include <ArduinoJson.h>
#include "led_sequences.h"


const int SMOKE_SENSOR_1 = 13;

const int SMOKE_SENSOR_2 = 12;

const int SMOKE_SENSOR_3 = 8;

const int SMOKE_SENSOR_4 = 7;

const int SMOKE_SENSOR_5 = 4;

const int SMOKE_SENSOR_6 = 2;

void setup() { 
  pinMode(SMOKE_SENSOR_1, INPUT);
  pinMode(SMOKE_SENSOR_2, INPUT);
  pinMode(SMOKE_SENSOR_3, INPUT);
  pinMode(SMOKE_SENSOR_4, INPUT);
  pinMode(SMOKE_SENSOR_5, INPUT);
  pinMode(SMOKE_SENSOR_6, INPUT);
  pixels.begin();
  Serial.begin(9600);
} 


void loop() {
  int sensor1State = digitalRead(SMOKE_SENSOR_1);
  int sensor2State = digitalRead(SMOKE_SENSOR_2);
  int sensor3State = digitalRead(SMOKE_SENSOR_3);
  int sensor4State = digitalRead(SMOKE_SENSOR_4);
  int sensor5State = digitalRead(SMOKE_SENSOR_5);
  int sensor6State = digitalRead(SMOKE_SENSOR_6);

  if (sensor1State == HIGH) {
    smokeSensor1Triggered();
    StaticJsonDocument<64> json;
    json["sensor"] = "1";
    serializeJson(json, Serial);
    Serial.println();
  }
  else if (sensor2State == HIGH) {
    smokeSensor2Triggered();
    StaticJsonDocument<64> json;
    json["sensor"] = "2";
    serializeJson(json, Serial);
    Serial.println();
  }
  else if (sensor3State == HIGH) {
    smokeSensor2Triggered();
    StaticJsonDocument<64> json;
    json["sensor"] = "3";
    serializeJson(json, Serial);
    Serial.println();
  }
  else if (sensor4State == HIGH) {
    smokeSensor5Triggered();
    StaticJsonDocument<64> json;
    json["sensor"] = "3";
    serializeJson(json, Serial);
    Serial.println();
  }
  else if (sensor5State == HIGH) {
    smokeSensor5Triggered();
    StaticJsonDocument<64> json;
    json["sensor"] = "4";
    serializeJson(json, Serial);
    Serial.println();
  }
  else if (sensor6State == HIGH) {
    smokeSensor6Triggered();
    StaticJsonDocument<64> json;
    json["sensor"] = "5";
    serializeJson(json, Serial);
    Serial.println();
  }
  
  // Check the other sensors here and call the corresponding LED sequence functions
  
  delay(100); // Wait for 100 milliseconds before repeating the loop
}


