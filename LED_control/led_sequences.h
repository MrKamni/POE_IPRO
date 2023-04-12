#include <Adafruit_NeoPixel.h>

const int DIN_PIN = 7;

const int LED_COUNT = 24;

const int Delay = 250;


Adafruit_NeoPixel pixels(LED_COUNT, DIN_PIN, NEO_GRB + NEO_KHZ800);


void smokeSensor1Triggered() {
    //Strip 1
    pixels.clear();
    pixels.setPixelColor(1, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(2, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(3, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);

    //Strip 2
    pixels.clear();
    pixels.setPixelColor(4, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(4, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(5, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(5, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(6, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(6, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    
    //Strip 3
    pixels.clear();
    pixels.setPixelColor(10, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(9, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(10, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(9, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(10, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(9, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(10, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(9, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(11, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(8, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(11, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(8, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(12, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(7, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(12, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(7, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);

    //Strip 4
    pixels.clear();
    pixels.setPixelColor(15, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(15, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(14, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(14, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(13, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(13, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);

    //Strip 5
    pixels.clear();
    pixels.setPixelColor(16, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(16, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(17, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(17, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(18, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(18, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);

    //Strip 6
    pixels.clear();
    pixels.setPixelColor(22, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(24, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(23, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(22, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(21, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(24, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(23, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(21, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(20, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(24, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(23, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(20, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(19, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(24, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(23, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(19, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
}



void smokeSensor2Triggered() {
    //Strip 2
    pixels.clear();
    pixels.setPixelColor(4, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(5, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(6, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);

    //Strip 1
    pixels.clear();
    pixels.setPixelColor(3, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(3, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(2, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(2, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(1, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(1, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    
    //Strip 6
    pixels.clear();
    pixels.setPixelColor(22, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(21, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(22, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(21, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(22, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(21, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(22, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(21, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(23, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(20, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(23, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(20, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(24, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(19, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(24, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(19, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);

    //Strip 4
    pixels.clear();
    pixels.setPixelColor(15, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(15, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(14, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(14, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(13, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(13, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);

    //Strip 5
    pixels.clear();
    pixels.setPixelColor(16, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(16, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(17, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(17, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(18, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(18, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);

    //Strip 3
    pixels.clear();
    pixels.setPixelColor(9, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(8, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(7, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(9, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(10, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(8, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(7, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(10, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(11, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(8, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(7, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(11, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(12, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(8, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(7, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(12, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
}



void smokeSensor5Triggered() {
    //Strip 4
    pixels.clear();
    pixels.setPixelColor(13, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(14, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(15, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);

    //Strip 5
    pixels.clear();
    pixels.setPixelColor(16, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(16, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(17, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(17, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(18, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(18, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    
    //Strip 6
    pixels.clear();
    pixels.setPixelColor(22, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(21, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(22, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(21, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(22, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(21, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(22, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(21, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(23, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(20, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(23, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(20, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(24, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(19, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(24, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(19, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);

    //Strip 1
    pixels.clear();
    pixels.setPixelColor(3, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(3, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(2, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(2, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(1, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(1, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);

    //Strip 2
    pixels.clear();
    pixels.setPixelColor(4, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(4, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(5, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(5, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(6, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(6, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);

    //Strip 3
    pixels.clear();
    pixels.setPixelColor(10, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(12, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(11, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(10, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(9, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(12, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(11, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(9, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(8, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(12, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(11, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(8, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(7, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(12, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(11, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(7, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
}



void smokeSensor6Triggered() {
    //Strip 5
    pixels.clear();
    pixels.setPixelColor(16, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(17, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(18, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);

    //Strip 4
    pixels.clear();
    pixels.setPixelColor(15, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(15, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(14, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(14, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(13, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(13, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    
    //Strip 3
    pixels.clear();
    pixels.setPixelColor(10, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(9, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(10, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(9, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(10, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(9, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(10, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(9, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(11, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(8, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(11, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(8, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(12, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(7, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(12, pixels.Color(0, 0, 0)); // no color
    pixels.setPixelColor(7, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);

    //Strip 1
    pixels.clear();
    pixels.setPixelColor(3, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(3, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(2, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(2, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(1, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(1, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);

    //Strip 2
    pixels.clear();
    pixels.setPixelColor(4, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(4, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(5, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(5, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(6, pixels.Color(0, 0, 128)); // green
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(6, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);

    //Strip 6
    pixels.clear();
    pixels.setPixelColor(21, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(19, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(20, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(21, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(22, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(19, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(20, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(22, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(23, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(19, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(20, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(23, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
    pixels.clear();
    pixels.setPixelColor(24, pixels.Color(0, 0, 128)); // green
    pixels.setPixelColor(19, pixels.Color(128, 0, 0)); // red
    pixels.setPixelColor(20, pixels.Color(128, 0, 0)); // red
    pixels.show();
    delay(Delay);
    pixels.setPixelColor(24, pixels.Color(0, 0, 0)); // no color
    pixels.show();
    delay(Delay);
}
