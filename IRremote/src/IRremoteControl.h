#ifndef IRremoteControl_h
#define IRremoteControl_h

#include "IRremote.h"
#include "IRremoteInt.h"

class IRremoteControl
{
public:
	IRremoteControl(int recv_pin);
	unsigned long GetKeyValue(void);
	IRrecv *irrecv;
private:
	decode_results results;
	//IRrecv *irrecv;
};

#endif
