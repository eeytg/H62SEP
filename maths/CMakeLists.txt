cmake_minimum_required(VERSION 2.8.11)
project(maths)

add_library(maths maths.cpp maths.h)
if(NOT BUILD_SHARED_LIBS)
    add_definitions(-Dmaths_STATIC)
endif()
set_target_properties(maths
	PROPERTIES PUBLIC_HEADER "maths.h;config.h")

install(TARGETS maths
	RUNTIME       DESTINATION bin
	LIBRARY       DESTINATION lib
	ARCHIVE       DESTINATION lib
	PUBLIC_HEADER DESTINATION include)