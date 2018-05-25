cmake_minimum_required(VERSION 2.8)
project(aruco_simple)

SET(CMAKE_MODULE_PATH ${CMAKE_INSTALL_PREFIX}/lib/cmake/ )
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Required packages
find_package(OpenCV REQUIRED)
#find_package(OpenGL REQUIRED)
#find_package(GLUT REQUIRED)

# Adding local ARUco Library
include_directories(/home/saikat/Downloads/aruco-3.0.10/include/)
link_directories(/home/saikat/Downloads/aruco-3.0.10/lib/)
include_directories( ${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} )

add_executable(aruco_simple aruco_simple.cpp)
target_link_libraries(aruco_simple ${OpenCV_LIBS} aruco)
