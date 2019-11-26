#include "sm1.h"
#include "hal.h"

StateMachine sm1;

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
        CHRONO_START(3000);
    }

    if(!s12() && CHORNO_ISFINISHED())
        NEXT_STATE(sm1_enchendo);
}
