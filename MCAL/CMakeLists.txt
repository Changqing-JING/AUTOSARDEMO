project(MCAL)

add_subdirectory(MicroControllerMock)
add_subdirectory(ADCDriver)
add_subdirectory(DIODriver)

set(MCAL_LIBRARIES MicroControllerMock ADCDriver DIODriver)

add_library(${PROJECT_NAME} INTERFACE)

target_link_libraries(${PROJECT_NAME} INTERFACE ${MCAL_LIBRARIES})