cmake_minimum_required(VERSION 2.8.11)
project(calc)

# SET CMAKE_PREFIX_PATH to the directory where maths is installed
find_path(MATHS_INCLUDE_DIR maths.h)
find_library(MATHS_LIBS maths)

message(STATUS ${MATHS_INCLUDE_DIR})
message(STATUS ${MATHS_LIBS})

add_definitions(-Dmaths_STATIC)
add_executable(calc calc.cpp)
include_directories(${MATHS_INCLUDE_DIR})
target_link_libraries(calc ${MATHS_LIBS})