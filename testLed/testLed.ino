#include <Adafruit_NeoPixel.h>

int PATTE_LED = 13;
int LED_DROITE = 0;
int LED_GAUCHE = 1;

Adafruit_NeoPixel led = Adafruit_NeoPixel(2, PATTE_LED, NEO_GRB + NEO_KHZ800);

void setup() {
  led.begin();
}

void loop() {
  led.setPixelColor(LED_DROITE, led.Color(100, 0, 0));
  led.setPixelColor(LED_GAUCHE, led.Color(0, 100, 0));
  led.show();
  delay(1000);
  led.setPixelColor(LED_DROITE, led.Color(0, 0, 100));
  led.setPixelColor(LED_GAUCHE, led.Color(50, 50, 50));
  led.show();
  delay(1000);
}
