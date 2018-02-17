#include <led.h>

Led ledtest;

void setup() {
	ledtest.led_InitPin(13);
}

void loop() {
	ledtest.led_blink();
}