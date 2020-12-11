#include <Adafruit_NeoPixel.h>

int PATTE_LED = 13;
int LED_DROITE = 0;
int LED_GAUCHE = 1;

Adafruit_NeoPixel led = Adafruit_NeoPixel(2, PATTE_LED, NEO_GRB + NEO_KHZ800);

void setup() {
  led.begin();
}

void loop() {
  int r, g, b;

  r = 255;  // On démarre en rouge
  g = 0;
  b = 0;
  while ( r > 0) {
    led.setPixelColor(LED_DROITE, led.Color(r, g, b));
    led.setPixelColor(LED_GAUCHE, led.Color(r, g, b));
    led.show();
    delay(5);
    r = r-1;
    g = g+1;
  }
  
  r = 0;
  g = 255;  // on démarre en vert
  b = 0;
  while ( g > 0) {
    led.setPixelColor(LED_DROITE, led.Color(r, g, b));
    led.setPixelColor(LED_GAUCHE, led.Color(r, g, b));
    led.show();
    delay(5);
    g = g-1;
    b = b+1;
  }
  
  r = 0;
  g = 0;
  b = 255;  // on démarre en bleu
  while ( b > 0) {
    led.setPixelColor(LED_DROITE, led.Color(r, g, b));
    led.setPixelColor(LED_GAUCHE, led.Color(r, g, b));
    led.show();
    delay(5);
    b = b-1;
    r = r+1;
  }
}
