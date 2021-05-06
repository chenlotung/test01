#include <Adafruit_NeoPixel.h>

// pin connected to the NeoPixels
#define RPIN        21
#define YPIN        22
#define GPIN        23
//How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 93
#define STARTPIXEL 32

#define TIMER 6000
#define TIMEY 500
#define TIMEG 8000

Adafruit_NeoPixel Rpixels(NUMPIXELS, RPIN , NEO_GRB + NEO_KHZ800);//RPIN
Adafruit_NeoPixel Ypixels(NUMPIXELS, YPIN , NEO_GRB + NEO_KHZ800);//YPIN
Adafruit_NeoPixel Gpixels(NUMPIXELS, GPIN , NEO_GRB + NEO_KHZ800);
void Ron1();
void Roff1();
void Yon1();
void Yoff1();
void Gon1();
void Goff1();


void setup() {
  Serial.begin(115200);
  Rpixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  Ypixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  Gpixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}
void loop() {
  Ron1();
  unsigned long startTime = millis();
  while ( millis() - startTime < TIMER)
  {
  }
  Roff1();
//  Goff1();
//  Yoff1();

  Yon1();
  startTime = millis();
  while ( millis() - startTime < TIMEY)
  {
  }
  Yoff1();
  startTime = millis();
  while ( millis() - startTime < TIMEY)
  {
  }
  Yon1();
  startTime = millis();
  while ( millis() - startTime <TIMEY)
  {
  }
  Yoff1();
  startTime = millis();
  while ( millis() - startTime < TIMEY)
  {
  }
  Yon1();
  startTime = millis();
  while ( millis() - startTime < TIMEY)
  {
  }
  Yoff1();
//  Roff1();
//  Goff1();
  Gon1();
  startTime = millis();
  while ( millis() - startTime < TIMEG)
  {
  }
//  Yoff1();
//  Roff1();
  Goff1();


}
