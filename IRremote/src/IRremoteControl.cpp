#include <IRremoteControl.h>

/**
 * @brief   		            初始化
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 	recv_pin       接收引脚								             
 * @return                       void        
 */
IRremoteControl::IRremoteControl(int recv_pin)
{
	irrecv = new IRrecv(recv_pin);
}

/**
 * @brief   		            获取键值
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 	       								
 * @return                       unsigned long        
 */
unsigned long IRremoteControl::GetKeyValue(void)
{
	unsigned long value = 0;
	if (irrecv->decode(&results))
	{
		value = results.value;
		irrecv->resume(); // Receive the next value
	}
	return value;
}
