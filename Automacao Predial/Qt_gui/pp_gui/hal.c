#include "../../common/hal.h"
#include <windows.h>
#include <time.h>

// Crie aqui os pinos de IO necessários para a implementação no Qt
// Ex.:
boolean pin_s11;
boolean pin_s12;
boolean pin_s21;
boolean pin_s22;
boolean pin_s31;
boolean pin_s32;
boolean pin_v1;
boolean pin_b1;
boolean pin_v2;
boolean pin_r1;
int32 temperaturaTanque3;

void InitHAL(){
    pin_s11=FALSE;
    pin_s12=FALSE;
    pin_s21=FALSE;
    pin_s22=FALSE;
    pin_s31=FALSE;
    pin_s32=FALSE;
    pin_v1=FALSE;
    pin_b1=FALSE;
    pin_v2=FALSE;
    pin_r1=FALSE;
}

uint32 Now(){
    return clock();
}

boolean s11(){
    return pin_s11;
}

boolean s12(){
    return pin_s12;
}

boolean s21(){
    return pin_s21;
}

boolean s22(){
    return pin_s22;
}

boolean s31(){
    return pin_s31;
}

boolean s32(){
    return pin_s32;
}

void v1(boolean state){
    pin_v1 = state;
}

void b1(boolean state){
    pin_b1 = state;
}

void v2(boolean state){
    pin_v2 = state;
}

void r1(boolean state){
    pin_r1 = state;
}

int32 lerTemperaturaTanque3(){
    return temperaturaTanque3;
}
