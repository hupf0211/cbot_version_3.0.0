#include <ultrasound.h>

/**
 * @brief   		            初始化
 * @code                        
 *      				                      
 * @endcode
 * @param[]                 									
 *          @arg                
 * @return                       void        
 */
Ultrasound::Ultrasound(int trig,int echo)
{
	this->trig = trig;
	this->echo = echo;
	
	//触发端口设置为输出，反馈端口设置为输入
	pinMode(echo, INPUT);
	pinMode(trig, OUTPUT);
}

/**
 * @brief   		            设置电平
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 	Level       电平								
 *          @arg                Level       0 ： 低电平
 *          @arg                Level       1 ： 高电平
 * @return                       void        
 */
void Ultrasound::SetLevel(int Level)
{
	digitalWrite(trig, Level);	//设置电平
}

/**
 * @brief   		            获取中间值
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 	S[S_MAX_NUM]   要获取中间值的数组							
 *          @arg                
 * @return                       float        
 */
float Ultrasound::GetMedian(float S[S_MAX_NUM])
{
	int i = 0;
	int j = 0;
	int temp;
	
	for (j=0;j<S_MAX_NUM-1;j++)  
   {  
      for (i=0;i<S_MAX_NUM-j;i++)  
      {  
         if ( S[i]>S[i+1] )  
         {  
            temp = S[i];  
            S[i] = S[i+1];   
             S[i+1] = temp;  
         }  
      }  
   }  
   return S[(S_MAX_NUM-1)/2];  
}

/**
 * @brief   		            获取测量的距离
 * @code                        
 *      				                      
 * @endcode
 * @param[in]                 	
 *          @arg                
 * @return                       float        
 */
float Ultrasound::GetDistance(void)
{
	float IntervalTime=0; //时间
	float S[S_MAX_NUM] = {0};  //距离
	int i = 0;
	for(i = 0; i < S_MAX_NUM; i++)
	{
		SetLevel(1); //trig置高电平
		delayMicroseconds(15);//延时15us
		SetLevel(0); //trig置低电平
		IntervalTime=pulseIn(echo, HIGH);//用自带的函数采样反馈的高电平的宽度，单位us
		S[i]=IntervalTime/58.00; //使用浮点计算出距离，单位cm
	}
	return GetMedian(S);
}

