#ifndef _HAL_H_
#define _HAL_H_

#include "../common/datatypes.h"

void InitHAL();
uint32 Now();

void Cmt0IntFunc();
void Ad0IntFunc();

boolean s11();
boolean s12();
boolean s21();
boolean s22();
boolean s31();
boolean s32();
int32 lerTemperaturaTanque3();
void v1(boolean state);
void b1(boolean state);
void v2(boolean state);
void r1(boolean state);

#endif
