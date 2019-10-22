#include "sm1.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm1;
chronometer sm1_chrono;

STATE(sm1_init){
    if(JUST_ARRIVED)
        v1(FALSE);

    if(!s12())
        NEXT_STATE(sm1_enchendo);
    else
        NEXT_STATE(sm1_parado);
}

STATE(sm1_enchendo){
    if(JUST_ARRIVED)
        v1(TRUE);

    if(s12())
        NEXT_STATE(sm1_parado);
}

STATE(sm1_parado){
    if(JUST_ARRIVED){
        v1(FALSE);
        chronoStart(&sm1_chrono,3000);
    }

    if(!s12() && chronoIsFinished(&sm1_chrono))
        NEXT_STATE(sm1_enchendo);
}
