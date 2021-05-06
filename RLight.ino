void Ron1() {
  for (int i = STARTPIXEL; i < NUMPIXELS; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    Rpixels.setPixelColor(i, Rpixels.Color(255, 0, 0));
    Rpixels.show();   // Send the updated pixel colors to the hardware.
  }
  Serial.println("Ron");
}

void Roff1() {
  for (int i = STARTPIXEL; i < NUMPIXELS; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    Rpixels.setPixelColor(i, Rpixels.Color(0, 0, 0));
    Rpixels.show();   // Send the updated pixel colors to the hardware.
  }
  Serial.println("Roff");
}
