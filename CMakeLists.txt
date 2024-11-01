# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and language
project(PvpGame LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directory for headers
include_directories(${CMAKE_SOURCE_DIR}/include)

# Automatically find all .cpp files in src directory
file(GLOB SOURCES "${CMAKE_SOURCE_DIR}/src/*.cpp")

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})
