project(ADCDriver)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} sourceFiles)

add_library(${PROJECT_NAME} ${sourceFiles})