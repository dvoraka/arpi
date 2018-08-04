#include <Arduino.h>

void disableBuiltinLed(void) {
	pinMode(LED_BUILTIN, OUTPUT);
	digitalWrite(LED_BUILTIN, LOW);
}
