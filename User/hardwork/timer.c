#include "timer.h"

////*************定时器3 PWM初始化**********************
////***************************************************
//A6,A7,B0,B1 单路
//void TIM3_PWM_Init_1(u16 arr,u16 psc)
//{
//	GPIO_InitTypeDef GPIO_InitStructure;
//	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
//	TIM_OCInitTypeDef  TIM_OCInitStructure;

//	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);	//使能定时器3时钟
// 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB, ENABLE);  //使能GPIO外设
//	  
//   //设置该引脚为复用输出功能,输出TIM3 的PWM脉冲波形	
//	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6 | GPIO_Pin_7; //TIM_CH1&2
//	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;  //复用推挽输出
//	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
//	GPIO_Init(GPIOA, &GPIO_InitStructure);//初始化GPIO
//	
//	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1; //TIM_CH3&4
//	GPIO_Init(GPIOB, &GPIO_InitStructure);//初始化GPIO
// 
//   //初始化TIM3
//	TIM_TimeBaseStructure.TIM_Period = arr; //设置在下一个更新事件装入活动的自动重装载寄存器周期的值
//	TIM_TimeBaseStructure.TIM_Prescaler =psc; //设置用来作为TIMx时钟频率除数的预分频值 
//	TIM_TimeBaseStructure.TIM_ClockDivision = 0; //设置时钟分割:TDTS = Tck_tim
//	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIM向上计数模式
//	TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure); //根据TIM_TimeBaseInitStruct中指定的参数初始化TIMx的时间基数单位
//	
//	//初始化TIM3 Channel PWM模式	 
//	TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1; //选择定时器模式:TIM脉冲宽度调制模式1
// 	TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable; //比较输出使能
//	TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_High; //输出极性:TIM输出比较极性高
//	
//	TIM_OC1Init(TIM3, &TIM_OCInitStructure);  //根据T指定的参数初始化外设TIM3 OC1
//	TIM_OC2Init(TIM3, &TIM_OCInitStructure);  //根据T指定的参数初始化外设TIM3 OC2
//	TIM_OC3Init(TIM3, &TIM_OCInitStructure);  //根据T指定的参数初始化外设TIM3 OC3
//	TIM_OC4Init(TIM3, &TIM_OCInitStructure);  //根据T指定的参数初始化外设TIM3 OC4

//	TIM_OC1PreloadConfig(TIM3, TIM_OCPreload_Enable);  //使能TIM3在CCR2上的预装载寄存器
//	TIM_OC2PreloadConfig(TIM3, TIM_OCPreload_Enable);  //使能TIM3在CCR2上的预装载寄存器
//	TIM_OC3PreloadConfig(TIM3, TIM_OCPreload_Enable);  //使能TIM3在CCR2上的预装载寄存器
//	TIM_OC4PreloadConfig(TIM3, TIM_OCPreload_Enable);  //使能TIM3在CCR2上的预装载寄存器
//	TIM_Cmd(TIM3, ENABLE);  //使能TIM3
//}

//******* ******定时器8 PWM初始化**********************
//***************************************************
//void TIM8_PWM_Init(u16 arr,u16 psc)
//{  
//    GPIO_InitTypeDef GPIO_InitStructure;
//    TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
//    TIM_OCInitTypeDef  TIM_OCInitStructure;
//    RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM8, ENABLE);// 使能定时器8时钟
//    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC , ENABLE);  ////使能GPIO外设
//	
//		//设置该引脚为复用输出功能,输出TIM8的PWM脉冲波形	
//    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9;
//    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;  //
//    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
//    GPIO_Init(GPIOC, &GPIO_InitStructure);
//	
//		//初始化TIM8
//    TIM_TimeBaseStructure.TIM_Period = arr; //设置在下一个更新事件装入活动的自动重装载寄存器周期的值//
//    TIM_TimeBaseStructure.TIM_Prescaler =psc; //设置用来作为TIMx时钟频率除数的预分频值 
//    TIM_TimeBaseStructure.TIM_ClockDivision = 0; //设置时钟分割:TDTS = Tck_tim
//    TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  ////TIM向上计数模式
//    TIM_TimeBaseInit(TIM8, &TIM_TimeBaseStructure); //根据TIM_TimeBaseInitStruct中指定的参数初始化TIMx的时间基数单位
//	
//    TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1; //选择定时器模式:TIM脉冲宽度调制模式1
//    TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable; ////比较输出使能
//    TIM_OCInitStructure.TIM_Pulse = 0; //
//    TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_High; ////输出极性:TIM输出比较极性高
//		
//		
//    TIM_OC1Init(TIM8, &TIM_OCInitStructure); 
//		TIM_OC2Init(TIM8, &TIM_OCInitStructure); 
//		TIM_OC3Init(TIM8, &TIM_OCInitStructure); 
//		TIM_OC4Init(TIM8, &TIM_OCInitStructure); 

//    TIM_CtrlPWMOutputs(TIM8,ENABLE);  //
//    TIM_OC1PreloadConfig(TIM8, TIM_OCPreload_Enable);  // 
//		TIM_OC2PreloadConfig(TIM8, TIM_OCPreload_Enable);
//		TIM_OC3PreloadConfig(TIM8, TIM_OCPreload_Enable);  // 
//		TIM_OC4PreloadConfig(TIM8, TIM_OCPreload_Enable);
//    TIM_ARRPreloadConfig(TIM8, ENABLE); //
//    TIM_Cmd(TIM8, ENABLE);  //
//}
void TIM1_PWM_Init(u16 arr,u16 psc)
{  
    GPIO_InitTypeDef GPIO_InitStructure;
    TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
    TIM_OCInitTypeDef  TIM_OCInitStructure;
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);// 使能定时器8时钟
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA , ENABLE);  ////使能GPIO外设
	
		//设置该引脚为复用输出功能,输出TIM8的PWM脉冲波形	
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_11|GPIO_Pin_10;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;  //
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
	
		//初始化TIM8
    TIM_TimeBaseStructure.TIM_Period = arr; //设置在下一个更新事件装入活动的自动重装载寄存器周期的值//
    TIM_TimeBaseStructure.TIM_Prescaler =psc; //设置用来作为TIMx时钟频率除数的预分频值 
    TIM_TimeBaseStructure.TIM_ClockDivision = 0; //设置时钟分割:TDTS = Tck_tim
    TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  ////TIM向上计数模式
    TIM_TimeBaseInit(TIM1, &TIM_TimeBaseStructure); //根据TIM_TimeBaseInitStruct中指定的参数初始化TIMx的时间基数单位
	
    TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1; //选择定时器模式:TIM脉冲宽度调制模式1
    TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable; ////比较输出使能
    TIM_OCInitStructure.TIM_Pulse = 0; //
    TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_High; ////输出极性:TIM输出比较极性高
		
		
    TIM_OC1Init(TIM1, &TIM_OCInitStructure); 
		TIM_OC2Init(TIM1, &TIM_OCInitStructure); 
		TIM_OC3Init(TIM1, &TIM_OCInitStructure); 
		TIM_OC4Init(TIM1, &TIM_OCInitStructure); 

    TIM_CtrlPWMOutputs(TIM1,ENABLE);  //
    TIM_OC1PreloadConfig(TIM1, TIM_OCPreload_Enable);  // 
		TIM_OC2PreloadConfig(TIM1, TIM_OCPreload_Enable);
		TIM_OC3PreloadConfig(TIM1, TIM_OCPreload_Enable);  // 
		TIM_OC4PreloadConfig(TIM1, TIM_OCPreload_Enable);
    TIM_ARRPreloadConfig(TIM1, ENABLE); //
    TIM_Cmd(TIM1, ENABLE);  //
}



