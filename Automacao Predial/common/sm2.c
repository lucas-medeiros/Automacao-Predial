#include "sm2.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm2;
chronometer sm2_chrono;

STATE(sm2_init){
        b1(FALSE);

    if(s11()&&!s22())
        NEXT_STATE(sm2_enchendo);
    else
        NEXT_STATE(sm2_parado);
}

STATE(sm2_enchendo){
       b1(TRUE);

    if(s22()||!s11())
        NEXT_STATE(sm2_parado);
}

STATE(sm2_parado){
    if(JUST_ARRIVED){
        b1(FALSE);
        chronoStart(&sm2_chrono,3000);
    }

    if(!s22() && chronoIsFinished(&sm2_chrono) &&s11())
        NEXT_STATE(sm2_enchendo);
}
