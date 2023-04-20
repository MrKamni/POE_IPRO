#include <ArduinoJson.h>
#include <TimeLib.h>
#include "led_sequences.h"


const int SMOKE_SENSOR_1 = A0;

const int SMOKE_SENSOR_2 = A1;

const int SMOKE_SENSOR_3 = A2;

const int SMOKE_SENSOR_4 = A3;

const int SMOKE_SENSOR_5 = A4;

const int SMOKE_SENSOR_6 = A5;

const int THRESHOLD1 = 700;

const int THRESHOLD2 = 700;

const int THRESHOLD5 = 700;

const int THRESHOLD6 = 700;

void setup() { 
  pinMode(SMOKE_SENSOR_1, INPUT);
  pinMode(SMOKE_SENSOR_2, INPUT);
  pinMode(SMOKE_SENSOR_3, INPUT);
  pinMode(SMOKE_SENSOR_4, INPUT);
  pinMode(SMOKE_SENSOR_5, INPUT);
  pinMode(SMOKE_SENSOR_6, INPUT);
  pixels.begin();
  Serial.begin(9600);
  while (!Serial) {}
  setTime(0); // set the initial time to midnight
} 


void loop() {
  int sensor1State = analogRead(SMOKE_SENSOR_1);
  int sensor2State = analogRead(SMOKE_SENSOR_2);
  // int sensor3State = digitalRead(SMOKE_SENSOR_3);
  // int sensor4State = digitalRead(SMOKE_SENSOR_4);
  int sensor5State = analogRead(SMOKE_SENSOR_5);
  int sensor6State = analogRead(SMOKE_SENSOR_6);

  if (sensor1State >= THRESHOLD1) {
    smokeSensor1Triggered();
    StaticJsonDocument<64> json;
    json["sensor"] = "1";
    json["value"] = sensor1State;
    json["timestamp"] = now();
    serializeJson(json, Serial);
    Serial.println();
  }
  if (sensor2State >= THRESHOLD2) {
    smokeSensor2Triggered();
    StaticJsonDocument<64> json;
    json["sensor"] = "2";
    json["value"] = sensor2State;
    json["timestamp"] = now();
    serializeJson(json, Serial);
    Serial.println();
  }
  // else if (sensor3State == HIGH) {
  //   smokeSensor2Triggered();
  //   StaticJsonDocument<64> json;
  //   json["sensor"] = "3";
  //   json["timestamp"] = now();
  //   serializeJson(json, Serial);
  //   Serial.println();
  // }
  // else if (sensor4State == HIGH) {
  //   smokeSensor5Triggered();
  //   StaticJsonDocument<64> json;
  //   json["sensor"] = "4";
  //   json["timestamp"] = now();
  //   serializeJson(json, Serial);
  //   Serial.println();
  // }
  if (sensor5State >= THRESHOLD5) {
    smokeSensor5Triggered();
    StaticJsonDocument<64> json;
    json["sensor"] = "5";
    json["value"] = sensor5State;
    json["timestamp"] = now();
    serializeJson(json, Serial);
    Serial.println();
  }
  if (sensor6State >= THRESHOLD6) {
    smokeSensor6Triggered();
    StaticJsonDocument<64> json;
    json["sensor"] = "6";
    json["value"] = sensor6State;
    json["timestamp"] = now();
    serializeJson(json, Serial);
    Serial.println();
  }
  else {
    NoSensorTriggered();
    StaticJsonDocument<64> json;
    json["sensor"] = "None";
    json["value_1"] = sensor1State;
    json["value_2"] = sensor2State;
    json["value_5"] = sensor5State;
    json["value_6"] = sensor6State;
    json["timestamp"] = now();
    serializeJson(json, Serial);
    Serial.println();
  }
  
  // Check the other sensors here and call the corresponding LED sequence functions
  
  delay(250); // Wait for 100 milliseconds before repeating the loop
}