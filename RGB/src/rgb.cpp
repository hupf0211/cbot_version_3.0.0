#include <rgb.h>
 /**
 * @brief   		            RGB初始化,默认使用9,10,11引脚
 * @code                        示例      
 *      				                       
 * @endcode
 * @param[]                 	       
 *          
 * @return                      void        
 */
RGB::RGB()
{
	red = 0;
	blue = 0;
	green = 0;
	
	// 发送信息
	Serial.println("\n\nString toInt() RGB:");
	Serial.println();

	// 设置led端口方向:
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
}

 /**
 * @brief   		            RGB初始化
 * @code                        示例      
 *      				                       
 * @endcode
 * @param[]                 	       
 *          
 * @return                      void        
 */
RGB::RGB(int R,int G,int B)
{
	red = 0;
	blue = 0;
	green = 0;
	
	// 发送信息
	Serial.println("\n\nString toInt() RGB:");
	Serial.println();

	// 设置led端口方向:
	pinMode(R, OUTPUT);
	pinMode(G, OUTPUT);
	pinMode(B, OUTPUT);
}

 /**
 * @brief   		            设置RGB值
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 	R       输入red值
								G       输入green值
								B       输入blue值
 *          @arg                R       范围：0~255
 *          @arg                G       范围：0~255  
 *          @arg                B       范围：0~255
 * @return                       void        
 */
void RGB::Set_RGB(int R, int G, int B)
{
	red = R%256;
	green = G%256;
	blue = B%256;
	Change_RGB_LED();
}

/**
 * @brief   		            设置red值
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 	R       输入red值
 *          @arg                R       范围：0~255

 * @return                       void        
 */
void RGB::Set_RGB_R(int R)
{
	red = R%256;
	Change_RGB_LED();
}

/**
 * @brief   		            设置green值
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 	G       输入green值
 *          @arg                G       范围：0~255

 * @return                       void        
 */
void RGB::Set_RGB_G(int G)
{
	green = G%256;
	Change_RGB_LED();
}

/**
 * @brief   		            设置blue值
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 	B       输入blue值
 *          @arg                B       范围：0~255

 * @return                       void        
 */
void RGB::Set_RGB_B(int B)
{
	blue = B%256;
	Change_RGB_LED();
}

/**
 * @brief   		            获取red值
 * @code                        
 *      				                      
 * @endcode
 * @param[]                 	
 *          
 * @return                       int        
 */
int RGB::Get_RGB_R(void)
{
	return red;
}

/**
 * @brief   		            获取green值
 * @code                        
 *      				                      
 * @endcode
 * @param[]                 	
 *          
 * @return                       int        
 */
int RGB::Get_RGB_G(void)
{
	return green;
}

/**
 * @brief   		            获取blue值
 * @code                        
 *      				                      
 * @endcode
 * @param[]                 	
 *          
 * @return                       int        
 */
int RGB::Get_RGB_B(void)
{
	return blue;
}

/**
 * @brief   		            点亮RGB灯
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 	
 *         
 * @return                       void        
 */
void RGB::Change_RGB_LED(void)
{
	// 写入对应的PWM值
	analogWrite(11,   red);
	analogWrite(9,  green);
	analogWrite(10,  blue);

	// 打印对应的数据到串口
	Serial.print("Red: ");
	Serial.print(red);
	Serial.print(", Green: ");
	Serial.print(green);
	Serial.print(", Blue: ");
	Serial.println(blue);
}

