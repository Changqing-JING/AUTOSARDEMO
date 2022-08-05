#ifndef ADC_H
#define ADC_H
#include "../Std_Types.h"


typedef unsigned int Adc_GroupType;

typedef int Adc_ValueGroupType;
void Adc_StartGroupConversion(Adc_GroupType Group);
Std_ReturnType Adc_ReadGroup(Adc_GroupType Group, Adc_ValueGroupType* DataBufferPtr);

#endif