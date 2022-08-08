

project(Rte)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} sourceFiles)

add_library(${PROJECT_NAME} ${sourceFiles})

target_link_libraries(${PROJECT_NAME} EcuAbstraction)