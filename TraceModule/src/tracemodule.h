#ifndef TRACEMODULE_H_
#define TRACEMODULE_H_

#include "Arduino.h"

class TraceModule
{
public:
	TraceModule(int pushButton);
	//void Avoidance_SetPushButton(int pushButton);
	int Trace_GetPushButton(void); 
private:
	int pushButton;	//读取引脚
};


#endif
