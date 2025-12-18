//
// Created by 1234455 on 2025/12/17.
//
#include <main.h>
#include <gpio.h>

#define Key_Pin GPIO_PIN_15
//static uint8_t Key_Num1=0;
uint8_t Key_GetNum()
{
    uint8_t Key_Num=0;

    if (HAL_GPIO_ReadPin(GPIOA,Key_Pin)==0)
    {
        HAL_Delay(20);
        while(HAL_GPIO_ReadPin(GPIOA,Key_Pin)==0);
        HAL_Delay(20);
        Key_Num=1;
        //Key_Num1=(Key_Num1+1)%2;                      //提供一个可开关的按键操作
    }

    return Key_Num;
}