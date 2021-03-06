# Set Name of project and language
project(Ex07 LANGUAGES CXX)

# Set cmake version
cmake_minimum_required(VERSION 3.0)

# set build type to Debug/Release
set(CMAKE_BUILD_TYPE "Debug")

#use math
add_definitions(-D_USE_MATH_DEFINES)

# Create executable using the specified source files
add_executable(${PROJECT_NAME}
    main.cpp
    triangle.h
    triangle.cpp
    square.h
    square.cpp
    circle.h
    circle.cpp
    shape.h
    shape.cpp
)

# Define required c++ standard to C++11
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_11)

# Set compile options, enable warnings
target_compile_options(${PROJECT_NAME} PRIVATE
$<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>: -Wall>
$<$<CXX_COMPILER_ID:MSVC>: /Wall>
)

