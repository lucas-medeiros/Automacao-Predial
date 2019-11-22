#include "sm3.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm3;
chronometer sm3_chrono;

STATE(sm3_init){
        v2(FALSE);

    if(s21()&&!s32())
        NEXT_STATE(sm3_enchendo);
    else
        NEXT_STATE(sm3_parado);
}

STATE(sm3_enchendo){
       v2(TRUE);

    if(s32()||!s21())
        NEXT_STATE(sm3_parado);
}

STATE(sm3_parado){
    if(JUST_ARRIVED){
        v2(FALSE);
        chronoStart(&sm3_chrono,3000);
    }

    if(!s32()&&s21() && chronoIsFinished(&sm3_chrono))
        NEXT_STATE(sm3_enchendo);
}
