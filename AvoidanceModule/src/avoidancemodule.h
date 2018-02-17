#ifndef AVOIDANCEMODULE_H_
#define AVOIDANCEMODULE_H_

#include "Arduino.h"

class AvoidanceModule
{
public:
	AvoidanceModule(int pushButton);
	//void Avoidance_SetPushButton(int pushButton);
	int Avoidance_GetPushButton(void); 
private:
	int pushButton;	//读取引脚
};


#endif
