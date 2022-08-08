#ifndef RTE_H
#define RTE_H

#include "../MCAL/Std_Types.h"

Std_ReturnType Rte_Read_RP_Temperature_Temperature(float32 *Temperature);

Std_ReturnType Rte_Write_PP_Temperature_Temperature(float32 Temperature);

Std_ReturnType Rte_Call_RP_StartMotor_StartMotor(uint8 FanSpeed);

Std_ReturnType Rte_Call_RP_StopMotor_StopMotor();

#endif