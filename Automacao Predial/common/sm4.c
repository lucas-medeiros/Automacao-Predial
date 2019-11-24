#include "sm4.h"
#include "hal.h"

StateMachine sm4;

STATE(sm4_init){
    if(JUST_ARRIVED)
        r1(FALSE);

    if((lerTemperaturaTanque3() < 49) && s31())
        NEXT_STATE(sm4_ligada);
    else
        NEXT_STATE(sm4_desligada);
}

STATE(sm4_ligada){
    if(JUST_ARRIVED)
       r1(TRUE);

    if((lerTemperaturaTanque3() >= 51) || !s31())
        NEXT_STATE(sm4_desligada);
}

STATE(sm4_desligada){
    if(JUST_ARRIVED){
       r1(FALSE);
       CHRONO_START(1000);
    }

    if((lerTemperaturaTanque3() <= 49) && CHORNO_ISFINISHED() && s31())
        NEXT_STATE(sm4_ligada);
}
