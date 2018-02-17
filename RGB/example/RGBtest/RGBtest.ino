#include <rgb.h>

RGB rgbtest;

void setup() {
	// 打开串口通讯功能等待串口打开
	Serial.begin(9600);
	while (!Serial) 
	{
		; // wait for serial port to connect. Needed for Leonardo only
	}
}

void loop() {
	rgbtest.Set_RGB(0,0,255);
	delay(100);
	rgbtest.Set_RGB(0,255,0);
	delay(100);
	rgbtest.Set_RGB(255,0,0);
	delay(100);
}