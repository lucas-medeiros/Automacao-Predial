#include "../../../common/hal.h"

uint32 TimerCont = 0;
void Cmt0IntFunc(){
	TimerCont++;
}

uint16 valorCAD;	//0 até 1023
void Ad0IntFunc(){
	R_PG_ADC_10_GetResult_AD0(&valorCAD);
}

void InitHAL(){
	R_PG_Clock_Set();
	R_PG_IO_PORT_Set_P0();
	R_PG_IO_PORT_Set_P2();
	R_PG_IO_PORT_Set_P4();
	R_PG_IO_PORT_Set_P5();
	R_PG_IO_PORT_Set_PA();
	R_PG_IO_PORT_Set_PD();
	R_PG_Timer_Start_CMT_U0_C0();
	R_PG_ADC_10_Set_AD0();
	R_PG_ADC_10_StartConversionSW_AD0();
}

uint32 Now(){
	return TimerCont;
}

boolean s11(){
	unsigned char v;
	R_PG_IO_PORT_Read_P50(&v);
	return v;
}

boolean s12(){
	unsigned char v;
	R_PG_IO_PORT_Read_P22(&v);
	return v;
}

boolean s21(){
	unsigned char v;
	R_PG_IO_PORT_Read_P20(&v);
	return v;
}

boolean s22(){
	unsigned char v;
	R_PG_IO_PORT_Read_P55(&v);
	return v;
}

boolean s31(){
	unsigned char v;
	R_PG_IO_PORT_Read_PD0(&v);
	return v;
}

boolean s32(){
	unsigned char v;
	R_PG_IO_PORT_Read_P05(&v);
	return v;
}

int32 lerTemperaturaTanque3(){
	int32 temp = (valorCAD/100) + 42; //intervalo de temperatura de 42 até 52 p/ teste
	return temp;
}

void v1(boolean state){
	R_PG_IO_PORT_Write_PA0(state);
}

void b1(boolean state){
	R_PG_IO_PORT_Write_PA1(state);
}

void v2(boolean state){
	R_PG_IO_PORT_Write_PA2(state);
}

void r1(boolean state){
	R_PG_IO_PORT_Write_P21(state);
}
