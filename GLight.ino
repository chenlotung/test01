void Gon1() {
  for (int i = STARTPIXEL; i < NUMPIXELS; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    Gpixels.setPixelColor(i, Gpixels.Color(0, 255, 0));
    Gpixels.show();   // Send the updated pixel colors to the hardware.
  }
  Serial.println("gon");
}

void Goff1() {
  for (int i = STARTPIXEL; i < NUMPIXELS; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    Gpixels.setPixelColor(i, Gpixels.Color(0, 0, 0));
    Gpixels.show();   // Send the updated pixel colors to the hardware.
  }
  Serial.println("goff");
}














void Glight() {


  // The first NeoPixel in a strand is #0, second is 1, all the way up
  // to the count of pixels minus one.
  //----------------------Green light_current:0.8A---------------------
  for (int i = STARTPIXEL; i < NUMPIXELS; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    Gpixels.setPixelColor(i, Gpixels.Color(0, 255, 0));
    Gpixels.show();   // Send the updated pixel colors to the hardware.
  }

  Gpixels.show();
  //  Gpixels.clear(); // Set all pixel colors to 'off'
  delay(3000);
  for (int i = STARTPIXEL; i < NUMPIXELS; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    Gpixels.setPixelColor(i, Gpixels.Color(0, 0, 0));
    Gpixels.show();   // Send the updated pixel colors to the hardware.
  }

  delay(3000);
}
