#include <tracemodule.h>

 /**
 * @brief   		            初始化
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 	pushButton   设置接受引脚								
 *          @arg                pushButton   
 * @return                       void        
 */
TraceModule::TraceModule(int pushButton)
{
	this->pushButton = pushButton;
	
	// 把按键引脚设置为输入
	pinMode(pushButton, INPUT);
}

 /**
 * @brief   		            获取引脚值
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 									
 *          @arg                 
 * @return                       int        
 */
int TraceModule::Trace_GetPushButton(void)
{
	return pushButton;
}


