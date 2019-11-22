#include "sm1.h"
#include "hal.h"
#include "chronometer.h"

StateMachine sm1;


STATE(sm1_init){
    v1(FALSE);

    if(!s12())
        NEXT_STATE(sm1_enchendo);
    else
        NEXT_STATE(sm1_parado);
}

STATE(sm1_enchendo){
    v1(TRUE);

    if(s12())
        NEXT_STATE(sm1_parado);
}

STATE(sm1_parado){
    v1(FALSE);
    if(JUST_ARRIVED)
    START(c,3000);
    if(!s12()&& ISFINISHED(c))
        NEXT_STATE(sm1_enchendo);
}
