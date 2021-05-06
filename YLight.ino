void Yon1() {
  for (int i = STARTPIXEL; i < NUMPIXELS; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    Ypixels.setPixelColor(i, Ypixels.Color(255, 255, 0));
    Ypixels.show();   // Send the updated pixel colors to the hardware.
  }
  Serial.println("Yon");
}

void Yoff1() {
  for (int i = STARTPIXEL; i < NUMPIXELS; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    Ypixels.setPixelColor(i, Ypixels.Color(0, 0, 0));
    Ypixels.show();   // Send the updated pixel colors to the hardware.
  }
  Serial.println("Yoff");
}
