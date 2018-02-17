/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

//#include <IRremote.h>
#include <IRremoteControl.h>
int RECV_PIN = 11;

IRremoteControl irremotectl(RECV_PIN);

void setup() {
	Serial.begin(9600);
	irremotectl.irrecv->enableIRIn(); // Start the receiver
}

void loop() {
	unsigned long value;
	value = irremotectl.GetKeyValue();
	if(value != 0)
	{
		Serial.println(value, HEX);
	}
}

