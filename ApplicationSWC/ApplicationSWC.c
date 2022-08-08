// Add RTE Application header
#include "../Rte/Rte.h"
#include "Rte_TemControlSWC.h"

void ApplTemperatureControl() {
  // Read data from Ecu Abstraction through RTE
  float32 Temperature;
  Rte_Read_RP_Temperature_Temperature(&Temperature);

  // Control Logic
  if (Temperature > 50 && Temperature < 75) {
    // Start Cooling fan (LowSpeed)
    Rte_Call_RP_StartMotor_StartMotor(25);
  } else if (Temperature > 75) {
    Rte_Call_RP_StartMotor_StartMotor(100);
  }

  else if (Temperature < 50) {
    Rte_Call_RP_StopMotor_StopMotor();
  }
}