/*
 *通过检测光敏电阻的变化值，
 *用于控制led的闪烁频率，值越大，闪烁越慢
*/

#include <Photoresistance.h>

Photoresistance PhotoresistanceTest(A0);

int ledPin = 13;       // led指示灯引脚
int sensorValue = 0;  //  模拟输入数值变量

void setup() {
	Serial.begin(9600);
	// 声明引脚为输出模式
	pinMode(ledPin, OUTPUT);  
}

void loop() {
  // 读取电位器电压值
  sensorValue = PhotoresistanceTest.GetSensorValue();
  Serial.println("sensorValue:");
  Serial.println(sensorValue);
  // 点亮led
  digitalWrite(ledPin, HIGH);  
  // 使用读取的这个模拟量值作为演示时间，单位ms，范围0-1023
  delay(sensorValue);          
  // 熄灭led
  digitalWrite(ledPin, LOW);   
  // 使用读取的这个模拟量值作为演示时间，单位ms，范围0-1023
  delay(sensorValue);                  
}
