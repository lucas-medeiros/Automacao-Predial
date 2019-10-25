#include "sm2.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm2;
chronometer sm2_chrono, sm2_chronoFast;

uint32 timer = 3000; //temporização

STATE(sm2_init){
    if(JUST_ARRIVED)
        b1(FALSE);

    if(!s22() && s11())
        NEXT_STATE(sm2_enchendo);
    else
        NEXT_STATE(sm2_parado);
}

STATE(sm2_enchendo){
    if(JUST_ARRIVED)
        b1(TRUE);

    if(s22() || !s11())
        NEXT_STATE(sm2_parado);
}

STATE(sm2_parado){
    if(JUST_ARRIVED){
        b1(FALSE);
        chronoStart(&sm2_chrono, 3000);
        chronoStart(&sm2_chronoFast, 3000/2);
    }

    if(s11() && !s22() && chronoIsFinished(&sm2_chrono))
        NEXT_STATE(sm2_enchendo);

    if(!s21() && s11() && chronoIsFinished(&sm2_chronoFast))
        NEXT_STATE(sm2_enchendo);
}

//mudança 1
