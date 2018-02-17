#include <led.h>
void Led::led_InitPin(int pin)
{
	led = pin;
	pinMode(led, OUTPUT);	
}

int Led::led_GetPin(void)
{
	return led;
	
}

void Led::led_blink(void)
{
	digitalWrite(led, HIGH);   // led引脚置高电平
	delay(1000);               // 延时1秒
	digitalWrite(led, LOW);    // led引脚变为低电平
	delay(1000);               // 延时1秒	
}
