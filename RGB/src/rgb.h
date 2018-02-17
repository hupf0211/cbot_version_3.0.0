#ifndef RGB_H_
#define RGB_H_

/*
 * The circuit:
 * led的3个脚连接到9,10,11脚
 * 阳极连接到VCC
 
 * 通过PWM功能进行调光，实现3种颜色混合显示
*/
#include "Arduino.h"


class RGB
{
public:
	RGB();
	RGB(int R,int G,int B);
	//void RGB_Init(void);
	//void RGB_Serial_control(void);
	void Set_RGB(int R, int G, int B);
	void Set_RGB_R(int R);
	void Set_RGB_G(int G);
	void Set_RGB_B(int B);
	int Get_RGB_R(void);
	int Get_RGB_G(void);
	int Get_RGB_B(void);
private:
	int red;
	int green;
	int	blue;
	//int currentColor = 0;
	//String inString = "";    // 字符串缓冲区
	void Change_RGB_LED(void);
};

#endif
