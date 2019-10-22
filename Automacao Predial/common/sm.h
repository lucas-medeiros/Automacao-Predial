#ifndef SM_H
#define SM_H

//Criando a variavel prt apontando para funÃ§Ã£o (Ponteiro para funÃ§Ã£o)
typedef void (*pFuncao)(void *);

typedef struct{
    pFuncao ptr;
    unsigned char entry;
}StateMachine;

//DefiniÃ§oes
#define STATE(name)         void name(StateMachine *_sm_)
#define NEXT_STATE(name)    _sm_->ptr = (pFuncao)name
#define INIT(sm,name)       {sm.ptr = (pFuncao)name;sm.entry=1;}
#define EXEC(sm)            {pFuncao temp=sm.ptr;sm.ptr(&sm);sm.entry=(temp != sm.ptr);}
#define JUST_ARRIVED        (_sm_->entry)

#endif // SM_H
