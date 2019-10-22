#ifndef _HAL_H_
#define _HAL_H_

#include "../common/datatypes.h"

void InitHAL();
uint32 Now();

boolean s11();
boolean s12();
boolean s21();
boolean s22();
void v1(boolean state);
void b1(boolean state);

#endif
