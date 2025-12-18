#include "servo.h"
#include "tim.h"

void Servo_Init()           //舵机初始化
{
    HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_2);
}

void Servo_Set_angle(const float angle)         //舵机角度设置
{
    uint32_t ccr_value = (uint32_t)(angle / 180.0 * 2000.0 + 500.0);
    __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_2, ccr_value);
}