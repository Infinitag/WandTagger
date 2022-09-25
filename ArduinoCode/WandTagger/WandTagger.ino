
#include <Infinitag_Core.h>
#include <IRremote.h>

//#define IR_USE_TIMER1
const int irSendPin = 3;

Infinitag_Core infinitagCore;

#include <Adafruit_NeoPixel.h>
#define BRIGHTNESS 50 
Adafruit_NeoPixel strip(1, 12, NEO_GRBW + NEO_KHZ800);

const int buttonPin = 10;
const int ledPin =  13;
int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

  IrSender.begin(irSendPin, ENABLE_LED_FEEDBACK);
  
  strip.begin();
  strip.show();
  strip.setBrightness(BRIGHTNESS);
  strip.fill(strip.Color(0, 0, 0, 255));
  strip.show();
  delay(200);
  strip.clear();
  strip.show();
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    unsigned long shotValue = infinitagCore.irEncode(false, 0, 0, 0, 1, 255);
    
    strip.fill(strip.Color(255, 0, 0, 0));
    strip.show();
    
    IrSender.sendRC5(shotValue, 24);
    
    strip.fill(strip.Color(0, 255, 0, 0));
    strip.show();
    delay(50);
    strip.clear();
    strip.show();
  }
}
