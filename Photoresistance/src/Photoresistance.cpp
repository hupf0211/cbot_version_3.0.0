#include <Photoresistance.h>
#include "Arduino.h"
/**
 * @brief   		            初始化
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 	secsorpin       模拟输入引脚								
 *          @arg                secsorpin       A0~A5
 * @return                       void        
 */
Photoresistance::Photoresistance(int secsorpin)
{
	sensorPin = secsorpin;
}

/**
 * @brief   		            读取电位器电压值
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 									
 * @return                       int        
 */
int Photoresistance::GetSensorValue(void)
{
	return analogRead(sensorPin);
}
