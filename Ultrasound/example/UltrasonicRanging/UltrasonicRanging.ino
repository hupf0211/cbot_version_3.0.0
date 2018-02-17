/*
 *超声波测距：
 *触发信号trig：触发高电平脉冲大于10us
 *反馈信号echo：返回的高电平长度就是距离的us数字
 *通过声波速度和采集到的时间计算出距离。
*/

#include <ultrasound.h>

//设置引脚8为触发信号，9为反馈信号
Ultrasound UltrasoundTest(8,9);

void setup() {
	Serial.begin(9600);
}

void loop() {
	float S = 0;
	S = UltrasoundTest.GetDistance();
	Serial.println(S);//通过串口输出距离数值		
}