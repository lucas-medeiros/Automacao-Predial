################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
..\src/AP_Renesas.c \
..\src/dbsct.c \
..\src/hal.c \
..\src/reset_program.c \
..\src/sbrk.c 

C_DEPS += \
./src/AP_Renesas.d \
./src/dbsct.d \
./src/hal.d \
./src/reset_program.d \
./src/sbrk.d 

OBJS += \
./src/AP_Renesas.obj \
./src/dbsct.obj \
./src/hal.obj \
./src/reset_program.obj \
./src/sbrk.obj 


# Each subdirectory must supply rules for building sources it contributes
src/%.obj: ../src/%.c
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	ccrx  -MM -MP -output=dep="$(@:%.obj=%.d)" -MT="$(@:%.obj=%.obj)" -MT="$(@:%.obj=%.d)" -lang=c   -include="C:\PROGRA~2\Renesas\RX\2_7_0/include","C:\temp\Lucas\Automacao-Predial-master\Automacao-Predial\Renesas\AP_Renesas\src\AP_pdg","C:\temp\Lucas\Automacao-Predial-master\Automacao-Predial\Renesas\AP_Renesas\src\AP_pdg\i_src"  -debug -isa=rxv1 -dbl_size=8 -fpu -alias=noansi -nologo  -define=__RX   "$<"
	ccrx -lang=c -output=obj="$(@:%.d=%.obj)"  -include="C:\PROGRA~2\Renesas\RX\2_7_0/include","C:\temp\Lucas\Automacao-Predial-master\Automacao-Predial\Renesas\AP_Renesas\src\AP_pdg","C:\temp\Lucas\Automacao-Predial-master\Automacao-Predial\Renesas\AP_Renesas\src\AP_pdg\i_src"  -debug -isa=rxv1 -dbl_size=8 -fpu -alias=noansi -nologo  -define=__RX   "$<"
	@echo 'Finished scanning and building: $<'
	@echo.

