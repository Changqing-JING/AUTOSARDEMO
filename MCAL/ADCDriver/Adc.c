#include "Adc.h"

extern int ADCRegister;

void Adc_StartGroupConversion(Adc_GroupType Group) {
  if (Group == 1) {
    // implementation here
  }
}

Std_ReturnType Adc_ReadGroup(Adc_GroupType Group,
                             Adc_ValueGroupType *DataBufferPtr) {

  Std_ReturnType ADCValue = 0;
  if (Group == 1) {
    ADCValue = ADCRegister;
    *DataBufferPtr = ADCValue;
  }

  return E_OK;
}
