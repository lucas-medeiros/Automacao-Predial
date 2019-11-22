#include "../../common/hal.h"
#include <windows.h>
#include <time.h>

// Crie aqui os pinos de IO necessários para a implementação no Qt
// Ex.:
boolean pin_s11;
boolean pin_s12;
boolean pin_v1;
boolean pin_s21;
boolean pin_s22;
boolean pin_b1;
boolean pin_s31;
boolean pin_s32;
boolean pin_v2;


// TESTES COM OS PINOS
//COM VAZÃO DO TANQUE 1 > TANQUE 2
// V1  |    S11     |    S12     | Tanque_1  |    B1     |    S21     |    S22     | Tanque_2  |
// F   |     F      |     F      |    OK     |    F      |      F     |     F      |    OK     | - TUDO CERTO
// V   |     F      |     F      |    OK     |    F      |      F     |     F      |    OK     | - TUDO CERTO
// F   |     V      |     F      |    OK     |    F      |      F     |     F      |    OK     | - TUDO CERTO
// F   |     F      |     V      |    OK     |    F      |      F     |     F      |    OK     | - TUDO CERTO
// F   |     F      |     F      |    OK     |    V      |      F     |     F      |    OK     | - Não fez diferença
// F   |     F      |     F      |    OK     |    F      |      V     |     F      |    OK     | - Não fez diferença
// F   |     F      |     F      |    OK     |    F      |      F     |     V      |    OK     | - Não fez diferença
//COM VAZÃO DO TANQUE 2 > TANQUE 1
// F   |     F      |     F      |    OK     |    F      |      F     |     F      | Nunca enche total| - TUDO CERTO
// V   |     F      |     F      |    OK     |    F      |      F     |     F      | Nunca enche total| - TUDO CERTO
// F   |     V      |     F      |    OK     |    F      |      F     |     F      | Nunca enche total| - TUDO CERTO
// F   |     F      |     V      |    OK     |    F      |      F     |     F      | Nunca enche total| - TUDO CERTO
// F   |     F      |     F      |    OK     |    V      |      F     |     F      |    OK     | - Não fez diferença
// F   |     F      |     F      |    OK     |    F      |      V     |     F      |    OK     | - Não fez diferença
// F   |     F      |     F      |    OK     |    F      |      F     |     V      |    OK     | - Não fez diferença




void InitHAL(){
    pin_v1=FALSE;
    pin_s11=FALSE;
    pin_s12=FALSE;

    pin_b1=FALSE;
    pin_s21=FALSE;
    pin_s22=FALSE;

    pin_v2=FALSE;
    pin_s31=FALSE;
    pin_s32=FALSE;


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

void v1(boolean state){
    pin_v1 = state;
}

boolean s21(){
    return pin_s21;
}

boolean s22(){
    return pin_s22;
}

void b1(boolean state){
    pin_b1 = state;
}

boolean s31(){
    return pin_s31;
}

boolean s32(){
    return pin_s32;
}

void v2(boolean state){
    pin_v2 = state;
}
