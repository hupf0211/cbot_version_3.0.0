#ifndef PHOTORESISTANCE_H_
#define PHOTORESISTANCE_H_

class Photoresistance
{
public:
	Photoresistance(int secsorpin);
	int GetSensorValue(void);
private:
	int sensorPin;	// 模拟输入引脚
};

#endif
