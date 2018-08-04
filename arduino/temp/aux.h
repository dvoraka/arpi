#include <Arduino.h>

void disabelBuiltinLed(void) {
	pinMode(LED_BUILTIN, OUTPUT);
	digitalWrite(LED_BUILTIN, LOW);
}
