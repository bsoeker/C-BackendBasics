# 1. Minimum CMake version required to run this script.
cmake_minimum_required(VERSION 3.21)

# 2. Define the project name and specify the programming language used.
project(basic-backend LANGUAGES CXX)

# 3. Enable the generation of compile_commands.json, useful for tools like clangd.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 4. Set the C++ standard for the project.
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 5. Specify where the generated executable should be placed.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

# 6. Include the Conan-generated toolchain file if using CMakeToolchain.
# Note: Include this line if not specified via command line.
include("${CMAKE_BINARY_DIR}/conan_toolchain.cmake")

# 7. Find the cpp-httplib package, making it available to the project.
find_package(httplib REQUIRED)

# 8. Define an executable target with the source file.
add_executable(server src/main.cpp)

# 9. Link the cpp-httplib library to the server target.
target_link_libraries(server PRIVATE httplib::httplib)
