#include <Adafruit_NeoPixel.h>

const int DIN_PIN = 7;

const int LED_COUNT = 24;

const int Delay = 150;


Adafruit_NeoPixel pixels(LED_COUNT, DIN_PIN, NEO_GRB + NEO_KHZ800);

void setPixel(int LED, char color) {
  switch (color) {
    case 'R':
      pixels.setPixelColor(LED, pixels.Color(128, 0, 0)); // red
      break;
    case 'G':
      pixels.setPixelColor(LED, pixels.Color(0, 0, 128)); // green
      break;
    case 'N':
      pixels.setPixelColor(LED, pixels.Color(0, 0, 0)); // no color
      break;
  }     
}

void NoSensorTriggered() {
    for (int i=0; i<24; i++) {
      setPixel(i, 'N');
    }
    pixels.show();
}

void smokeSensor1Triggered() {
    setPixel(0, 'R'); // Red
    setPixel(1, 'R'); // Red
    setPixel(2, 'R'); // Red
    setPixel(21, 'R'); // Red
    setPixel(22, 'R'); // Red
    setPixel(23, 'R'); // Red
    pixels.show();
  //==============================================================
    
    setPixel(3, 'G'); // green
    setPixel(8, 'G'); // green
    setPixel(9, 'G'); // green
    setPixel(14, 'G'); // green
    setPixel(15, 'G'); // green
    setPixel(20, 'G'); // green
    pixels.show();
    delay(Delay);
    setPixel(3, 'N'); // no color
    setPixel(8, 'N'); // no color
    setPixel(9, 'N'); // no color
    setPixel(14, 'N'); // no color
    setPixel(15, 'N'); // no color
    setPixel(20, 'N'); // no color
    pixels.show();
    delay(Delay);
    //==============================================================
    
    setPixel(4, 'G'); // green
    setPixel(7, 'G'); // green
    setPixel(10, 'G'); // green
    setPixel(13, 'G'); // green
    setPixel(16, 'G'); // green
    setPixel(19, 'G'); // green
    pixels.show();
    delay(Delay);
    setPixel(4, 'N'); // no color
    setPixel(7, 'N'); // no color
    setPixel(10, 'N'); // no color
    setPixel(13, 'N'); // no color
    setPixel(16, 'N'); // no color
    setPixel(19, 'N'); // no color
    pixels.show();
    delay(Delay);
    //==============================================================
    
    setPixel(5, 'G'); // green
    setPixel(6, 'G'); // green
    setPixel(11, 'G'); // green
    setPixel(12, 'G'); // green
    setPixel(17, 'G'); // green
    setPixel(18, 'G'); // green
    pixels.show();
    delay(Delay);
    setPixel(5, 'N'); // no color
    setPixel(6, 'N'); // no color
    setPixel(11, 'N'); // no color
    setPixel(12, 'N'); // no color
    setPixel(17, 'N'); // no color
    setPixel(18, 'N'); // no color
    pixels.show();
    delay(Delay);
}


void smokeSensor2Triggered() {
    setPixel(3, 'R'); // Red
    setPixel(4, 'R'); // Red
    setPixel(5, 'R'); // Red
    setPixel(6, 'R'); // Red
    setPixel(7, 'R'); // Red
    setPixel(8, 'R'); // Red
    pixels.show();
  //==============================================================
    
    setPixel(2, 'G'); // green
    setPixel(21, 'G'); // green
    setPixel(9, 'G'); // green
    setPixel(14, 'G'); // green
    setPixel(15, 'G'); // green
    setPixel(20, 'G'); // green
    pixels.show();
    delay(Delay);
    setPixel(2, 'N'); // no color
    setPixel(21, 'N'); // no color
    setPixel(9, 'N'); // no color
    setPixel(14, 'N'); // no color
    setPixel(15, 'N'); // no color
    setPixel(20, 'N'); // no color
    pixels.show();
    delay(Delay);
    //==============================================================
    
    setPixel(1, 'G'); // green
    setPixel(22, 'G'); // green
    setPixel(10, 'G'); // green
    setPixel(13, 'G'); // green
    setPixel(16, 'G'); // green
    setPixel(19, 'G'); // green
    pixels.show();
    delay(Delay);
    setPixel(1, 'N'); // no color
    setPixel(22, 'N'); // no color
    setPixel(10, 'N'); // no color
    setPixel(13, 'N'); // no color
    setPixel(16, 'N'); // no color
    setPixel(19, 'N'); // no color
    pixels.show();
    delay(Delay);
    //==============================================================
    
    setPixel(0, 'G'); // green
    setPixel(23, 'G'); // green
    setPixel(11, 'G'); // green
    setPixel(12, 'G'); // green
    setPixel(17, 'G'); // green
    setPixel(18, 'G'); // green
    pixels.show();
    delay(Delay);
    setPixel(0, 'N'); // no color
    setPixel(23, 'N'); // no color
    setPixel(11, 'N'); // no color
    setPixel(12, 'N'); // no color
    setPixel(17, 'N'); // no color
    setPixel(18, 'N'); // no color
    pixels.show();
    delay(Delay);
}


void smokeSensor5Triggered() {
    setPixel(9, 'R'); // Red
    setPixel(10, 'R'); // Red
    setPixel(11, 'R'); // Red
    setPixel(12, 'R'); // Red
    setPixel(13, 'R'); // Red
    setPixel(14, 'R'); // Red
    pixels.show();
  //==============================================================
    
    setPixel(2, 'G'); // green
    setPixel(21, 'G'); // green
    setPixel(3, 'G'); // green
    setPixel(8, 'G'); // green
    setPixel(15, 'G'); // green
    setPixel(20, 'G'); // green
    pixels.show();
    delay(Delay);
    setPixel(2, 'N'); // no color
    setPixel(21, 'N'); // no color
    setPixel(3, 'N'); // no color
    setPixel(8, 'N'); // no color
    setPixel(15, 'N'); // no color
    setPixel(20, 'N'); // no color
    pixels.show();
    delay(Delay);
    //==============================================================
    
    setPixel(1, 'G'); // green
    setPixel(22, 'G'); // green
    setPixel(4, 'G'); // green
    setPixel(7, 'G'); // green
    setPixel(16, 'G'); // green
    setPixel(19, 'G'); // green
    pixels.show();
    delay(Delay);
    setPixel(1, 'N'); // no color
    setPixel(22, 'N'); // no color
    setPixel(4, 'N'); // no color
    setPixel(7, 'N'); // no color
    setPixel(16, 'N'); // no color
    setPixel(19, 'N'); // no color
    pixels.show();
    delay(Delay);
    //==============================================================
    
    setPixel(0, 'G'); // green
    setPixel(23, 'G'); // green
    setPixel(5, 'G'); // green
    setPixel(6, 'G'); // green
    setPixel(17, 'G'); // green
    setPixel(18, 'G'); // green
    pixels.show();
    delay(Delay);
    setPixel(0, 'N'); // no color
    setPixel(23, 'N'); // no color
    setPixel(5, 'N'); // no color
    setPixel(6, 'N'); // no color
    setPixel(17, 'N'); // no color
    setPixel(18, 'N'); // no color
    pixels.show();
    delay(Delay);
}


void smokeSensor6Triggered() {
    setPixel(15, 'R'); // Red
    setPixel(16, 'R'); // Red
    setPixel(17, 'R'); // Red
    setPixel(18, 'R'); // Red
    setPixel(19, 'R'); // Red
    setPixel(20, 'R'); // Red
    pixels.show();
  //==============================================================
    
    setPixel(2, 'G'); // green
    setPixel(21, 'G'); // green
    setPixel(3, 'G'); // green
    setPixel(8, 'G'); // green
    setPixel(9, 'G'); // green
    setPixel(14, 'G'); // green
    pixels.show();
    delay(Delay);
    setPixel(2, 'N'); // no color
    setPixel(21, 'N'); // no color
    setPixel(3, 'N'); // no color
    setPixel(8, 'N'); // no color
    setPixel(9, 'N'); // no color
    setPixel(14, 'N'); // no color
    pixels.show();
    delay(Delay);
    //==============================================================
    
    setPixel(1, 'G'); // green
    setPixel(22, 'G'); // green
    setPixel(4, 'G'); // green
    setPixel(7, 'G'); // green
    setPixel(10, 'G'); // green
    setPixel(13, 'G'); // green
    pixels.show();
    delay(Delay);
    setPixel(1, 'N'); // no color
    setPixel(22, 'N'); // no color
    setPixel(4, 'N'); // no color
    setPixel(7, 'N'); // no color
    setPixel(10, 'N'); // no color
    setPixel(13, 'N'); // no color
    pixels.show();
    delay(Delay);
    //==============================================================
    
    setPixel(0, 'G'); // green
    setPixel(23, 'G'); // green
    setPixel(5, 'G'); // green
    setPixel(6, 'G'); // green
    setPixel(11, 'G'); // green
    setPixel(12, 'G'); // green
    pixels.show();
    delay(Delay);
    setPixel(0, 'N'); // no color
    setPixel(23, 'N'); // no color
    setPixel(5, 'N'); // no color
    setPixel(6, 'N'); // no color
    setPixel(11, 'N'); // no color
    setPixel(12, 'N'); // no color
    pixels.show();
    delay(Delay);
}