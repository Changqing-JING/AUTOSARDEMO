#include "Rte.h"
#include "../EcuAbstraction/Rte_TempHBridgeSWC.h"

float32 PP_Temperature_Temperature;

Std_ReturnType Rte_Write_PP_Temperature_Temperature(float32 Temperature) {
  PP_Temperature_Temperature = Temperature;
  return RTE_E_OK;
}

Std_ReturnType Rte_Read_RP_Temperature_Temperature(float32 *Temperature) {
  *Temperature = PP_Temperature_Temperature;
  return RTE_E_OK;
}

Std_ReturnType Rte_Call_RP_StartMotor_StartMotor(uint8 FanSpeed) {
  StartMotor_Function(FanSpeed);
  return RTE_E_OK;
}

Std_ReturnType Rte_Call_RP_StopMotor_StopMotor() {
  StopMotor_Function();
  return RTE_E_OK;
}