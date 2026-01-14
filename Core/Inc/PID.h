//
// Created by 1234455 on 2026/1/14.
//

#ifndef PROJECT_PID_H
#define PROJECT_PID_H
#include "main.h"
typedef struct
{
    float Kp;
    float Ki;
    float Kd;
    float err;
    float last_err;
    float inter;
    float det;
    uint8_t is_first;
}PID;
void Init_PID(PID *pid, const float Kp, const float Ki, const float Kd);
float drive_PID(PID *pid, const float err);
#endif //PROJECT_PID_H