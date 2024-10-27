cmake_minimum_required(VERSION 3.26.4)

# Define library
project(cppvec)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the source files
file(GLOB_RECURSE SOURCES "source/*.cpp")

# Add the library target
add_library(cppvec STATIC ${SOURCES})

# Specify include directories for the Engine library
target_include_directories(cppvec PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
