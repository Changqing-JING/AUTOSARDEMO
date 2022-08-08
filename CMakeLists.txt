cmake_minimum_required(VERSION 3.5)
project(AUTOSARDEMO)

set(CMAKE_C_STANDARD 11)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(ApplicationSWC)
add_subdirectory(MCAL)
add_subdirectory(EcuAbstraction)
add_subdirectory(Rte)
add_subdirectory(PCRunner)
