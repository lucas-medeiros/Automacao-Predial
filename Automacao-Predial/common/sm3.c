#include "sm3.h"
#include "hal.h"

StateMachine sm3;

STATE(sm3_init){
    if(JUST_ARRIVED)
        v2(FALSE);

    if(s21() && !s32())
        NEXT_STATE(sm3_ligada);
    else
        NEXT_STATE(sm3_desligada);
}

STATE(sm3_ligada){
    if(JUST_ARRIVED)
       v2(TRUE);

    if(!s21() || s32())
        NEXT_STATE(sm3_desligada);
}

STATE(sm3_desligada){
    if(JUST_ARRIVED){
       v2(FALSE);
       CHRONO_START(3000);
    }

    if(s21() && !s32() && CHORNO_ISFINISHED())
        NEXT_STATE(sm3_ligada);
}
