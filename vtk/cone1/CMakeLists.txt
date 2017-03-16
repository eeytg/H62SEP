cmake_minimum_required(VERSION 2.8.11)
project(vtk_ex1)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

add_executable(vtk_ex1 main.cpp)
target_link_libraries(vtk_ex1 ${VTK_LIBRARIES})
