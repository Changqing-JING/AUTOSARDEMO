// Include RTE Application header
#include "Rte_TempHBridgeSWC.h"

#include "../MCAL/ADCDriver/Adc.h"
#include "../MCAL/DIODriver/Dio.h"
#include "../Rte/Rte.h"

// Code for RUnnable - Read Temperature
void ReadTemperature_Function() {
  // Trigger ADC Conversion and read results
  Adc_ValueGroupType ADCResult;
  Adc_StartGroupConversion(1);
  Adc_ReadGroup(1, &ADCResult);

  // Covert ADC raw value to Voltage
  // 10 bit ADC with voltage ref-2.5V
  float32 PinVoltage = (2.5f / 1024) * ADCResult;

  // Convert voltage to temperature
  // Resp. sensor acutator SWC on Application layer
  // Sensor -> for 35deg ouput voltage is 0.35V
  float32 Temperature = PinVoltage * 100;

  // Write temperature results to RTE
  Rte_Write_PP_Temperature_Temperature(Temperature);
}

// Code for Runnable - StartMotor (Server)
Std_ReturnType StartMotor_Function(uint8 Fanspeed) {
  if (Fanspeed < 50) {
    // Trigger colling fan with half speed
    // H-Bridge settings login to (1,0)
    Dio_WriteChannel(10, STD_HIGH);
    Dio_WriteChannel(11, STD_LOW);
  } else {
    // Run fan at full speed
    // H-Bridge settings logic to (1,1)
    Dio_WriteChannel(10, STD_HIGH);
    Dio_WriteChannel(11, STD_HIGH);
  }
  return E_OK;
}

// Code for Runnable - Stop Motor

void StopMotor_Function() {
  // H-Bridge settings logic to (0,0)
  Dio_WriteChannel(10, STD_LOW);
  Dio_WriteChannel(11, STD_LOW);
}