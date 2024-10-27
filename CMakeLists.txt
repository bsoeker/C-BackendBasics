cmake_minimum_required(VERSION 3.16)
project(basic-backend)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set the output directory for the executable (optional)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Add the executable
add_executable(server src/main.cpp)