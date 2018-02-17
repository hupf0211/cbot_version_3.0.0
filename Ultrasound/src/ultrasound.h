#ifndef ULTRASOUND_H_
#define ULTRASOUND_H_

#include "Arduino.h"

#define S_MAX_NUM	17
class Ultrasound
{
public:
	Ultrasound(int trig,int echo);
	void SetLevel(int Level);
	float GetDistance(void);
	float GetMedian(float S[S_MAX_NUM]);
private:
	int trig;	// 触发信号
	int echo;	// 反馈信号
};	

#endif
