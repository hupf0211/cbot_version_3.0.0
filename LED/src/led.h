#ifndef LED_H_
#define LED_H_

#include "Arduino.h"

class Led
{
public:
	void led_InitPin(int pin);
	void led_blink(void);
	int led_GetPin(void);
private:
	int led = 13;	//led 连接到 13引脚
	
};


#endif
