#include <tracemodule.h>

TraceModule traceTest(2);

void setup() {
	// 初始化串口
	Serial.begin(9600);
}

void loop() {
	int push = traceTest.Trace_GetPushButton();
	// 读取输入引脚的值
	int buttonState = digitalRead(push);
	// 打印结果到串口
	Serial.println(buttonState);
	delay(1000);
}
