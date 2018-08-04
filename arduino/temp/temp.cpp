#include <Arduino.h>
#include "aux.h"


const int sensorPin = A2;

void setup() {
	disableBuiltinLed();

	Serial.begin(9600);

	pinMode(2, INPUT);
}

void loop() {

	int sensorVal = analogRead(sensorPin);

	// send the 10-bit sensor value out the serial port
	Serial.print("sensor Value: ");
	Serial.print(sensorVal);

	// convert the ADC reading to voltage
	float voltage = (sensorVal / 1024.0) * 5.0;
	Serial.print(", Volts: ");
	Serial.print(voltage);

	// convert the voltage to temperature in degrees C
	// the sensor changes 10 mV per degree
	// the datasheet says there's a 500 mV offset
	// ((voltage - 500 mV) times 100)
	Serial.print(", degrees C: ");
	float temperature = (voltage - .5) * 100;
	Serial.println(temperature);

	delay(1000);
}
