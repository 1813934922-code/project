//
// Created by 1234455 on 2026/1/14.
//
#include "PID.h"

void Init_PID(PID *pid, const float Kp, const float Ki, const float Kd)
{
    pid->Kp = Kp;
    pid->Ki = Ki;
    pid->Kd = Kd;
    pid->inter=0;
    pid->is_first=0;
}

float drive_PID(PID *pid, const float err)
{
    float result;
    pid->inter += err;
    pid->err=err;
    if (pid->is_first==0)
    {
        pid->is_first=1;
        pid->last_err= err;
    }
    pid->det=pid->err-pid->last_err;
    //result=pid->Kp*err+pid->Ki*pid->inter;
    return result;           ///   // // /
}

