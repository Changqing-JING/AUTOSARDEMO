#ifndef RTE_TEMPHBRIDGESWC_H
#define RTE_TEMPHBRIDGESWC_H

#include "../MCAL/Std_Types.h"

void ReadTemperature_Function();

Std_ReturnType StartMotor_Function(uint8 Fanspeed);

void StopMotor_Function();

#endif