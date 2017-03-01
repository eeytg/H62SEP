cmake_minimum_required(VERSION 2.8.11)
project(hiqt)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
SET(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets)

add_executable(helloworld WIN32 main.cpp mainwindow.cpp mainwindow.h mainwindow.ui)
target_link_libraries(helloworld Qt5::Widgets)
