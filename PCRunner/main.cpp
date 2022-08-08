#include <chrono>
#include <thread>

extern "C" {
#include "../ApplicationSWC/Rte_TemControlSWC.h"
}

int main() {
  while (true) {
    ApplTemperatureControl();
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
  }
  return 0;
}