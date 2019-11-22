#include "behavior.h"
#include "hal.h"
#include "sm1.h"
#include "sm2.h"
#include "sm3.h"

void behavior(){
    InitHAL();
    INIT(sm1,sm1_init);
    INIT(sm2,sm2_init);
    INIT(sm3,sm3_init);

    for(;;){
        EXEC(sm1);
        EXEC(sm2);
        EXEC(sm3);
    }
}



