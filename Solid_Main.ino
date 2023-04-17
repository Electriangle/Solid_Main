/* 
 * Author: Electriangle
 * Description: Simple ON/OFF solid color animations for a WS2812B LED strip (or equivalent) using the FastLED library.
 * Date Created: 4/16/2023
 * 
 * MIT License
 * 
 * Copyright (c) 2023 Electriangle
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/ 

#include "FastLED.h"

#define NUM_LEDS  150    // Enter the total number of LEDs on the strip
#define PIN       7      // Enter the pin that is connected to the LED strip "Data In" Pin

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, PIN, GRB>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 1500);    // Set power limit of LED strip to 5V, 1500mA. Adjust as needed.
  FastLED.clear();                                    // Initialize all LEDs to OFF
}

void loop() {
  // Examples of available functions:
  AllOn(255, 0, 0);
  delay(5000);
  AllOff();
  delay(5000);
  FadeOn(0, 0, 255);
  delay(5000);
  FadeOff(0, 0, 255);
  delay(5000);
  SwipeOn(0, 255, 0);
  delay(5000);
  SwipeOff(0, 255, 0);
  delay(5000);
}

// Common Colors:
//    (255, 0, 0)       // Red
//    (255, 128, 0)     // Orange
//    (255, 255, 0)     // Yellow
//    (0, 255, 0)       // Green
//    (0, 0, 255)       // Blue
//    (128, 0, 255)     // Purple
//    (255, 128, 128)   // Pink
//    (255, 255, 255)   // White
