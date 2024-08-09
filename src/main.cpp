#define DEBUG       0
#define LEDPIN      D2
#define NUM_PIXELS  7

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXELS, LEDPIN, NEO_GRB + NEO_KHZ800);

struct numbers_array{
    int zero    [7] = {1,1,1,1,1,1,0};
    int one     [7] = {0,1,1,0,0,0,0};
    int two     [7] = {1,1,0,1,1,0,1};
    int three   [7] = {1,1,1,1,0,0,1};
    int four    [7] = {0,1,1,0,0,1,1};
    int five    [7] = {1,0,1,1,0,1,1};
    int six     [7] = {1,0,1,1,1,1,1};
    int seven   [7] = {1,1,1,0,0,0,0};
    int eight   [7] = {1,1,1,1,1,1,1};
    int nine    [7] = {1,1,1,1,0,1,1};
};

struct numbers_array numbers;

void setup() {
    Serial.begin(9600);
    strip.begin();

}

void loop() {
    for (int i = 0; i < 7; i++){
        if (numbers.zero[i] == 1){
            strip.setPixelColor(i, strip.Color(255, 125, 0));
        } else {
            strip.setPixelColor(i, strip.Color(0, 0, 0));
        }
        strip.show();
        if (DEBUG){Serial.print(numbers.zero[i]);}
    }
    delay(1000);
    strip.clear();
    for (int i = 0; i < 7; i++){
        if (numbers.one[i] == 1){
            strip.setPixelColor(i, strip.Color(255, 125, 0));
        } else {
            strip.setPixelColor(i, strip.Color(0, 0, 0));
        }
        strip.show();
        if (DEBUG){Serial.print(numbers.one[i]);}
    }
    delay(1000);
    strip.clear();
    for (int i = 0; i < 7; i++){
        if (numbers.two[i] == 1){
            strip.setPixelColor(i, strip.Color(255, 125, 0));
        } else {
            strip.setPixelColor(i, strip.Color(0, 0, 0));
        }
        strip.show();
        if (DEBUG){Serial.print(numbers.two[i]);}
    }
    delay(1000);
    strip.clear();
    for (int i = 0; i < 7; i++){
        if (numbers.three[i] == 1){
            strip.setPixelColor(i, strip.Color(255, 125, 0));
        } else {
            strip.setPixelColor(i, strip.Color(0, 0, 0));
        }
        strip.show();
        if (DEBUG){Serial.print(numbers.three[i]);}
    }
    delay(1000);
    strip.clear();
    for (int i = 0; i < 7; i++){
        if (numbers.four[i] == 1){
            strip.setPixelColor(i, strip.Color(255, 125, 0));
        } else {
            strip.setPixelColor(i, strip.Color(0, 0, 0));
        }
        strip.show();
        if (DEBUG){Serial.print(numbers.four[i]);}
    }
    delay(1000);
    strip.clear();
    for (int i = 0; i < 7; i++){
        if (numbers.five[i] == 1){
            strip.setPixelColor(i, strip.Color(255, 125, 0));
        } else {
            strip.setPixelColor(i, strip.Color(0, 0, 0));
        }
        strip.show();
        if (DEBUG){Serial.print(numbers.five[i]);}
    }
    delay(1000);
    strip.clear();
    for (int i = 0; i < 7; i++){
        if (numbers.six[i] == 1){
            strip.setPixelColor(i, strip.Color(255, 125, 0));
        } else {
            strip.setPixelColor(i, strip.Color(0, 0, 0));
        }
        strip.show();
        if (DEBUG){Serial.print(numbers.six[i]);}
    }
    delay(1000);
    strip.clear();
    for (int i = 0; i < 7; i++){
        if (numbers.seven[i] == 1){
            strip.setPixelColor(i, strip.Color(255, 125, 0));
        } else {
            strip.setPixelColor(i, strip.Color(0, 0, 0));
        }
        strip.show();
        if (DEBUG){Serial.print(numbers.seven[i]);}
    }
    delay(1000);
    strip.clear();
    for (int i = 0; i < 7; i++){
        if (numbers.eight[i] == 1){
            strip.setPixelColor(i, strip.Color(255, 125, 0));
        } else {
            strip.setPixelColor(i, strip.Color(0, 0, 0));
        }
        strip.show();
        if (DEBUG){Serial.print(numbers.eight[i]);}
    }
    delay(1000);
    strip.clear();
    for (int i = 0; i < 7; i++){
        if (numbers.nine[i] == 1){
            strip.setPixelColor(i, strip.Color(255, 125, 0));
        } else {
            strip.setPixelColor(i, strip.Color(0, 0, 0));
        }
        strip.show();
        if (DEBUG){Serial.print(numbers.nine[i]);}
    }
    delay(1000);
    strip.clear();

}
