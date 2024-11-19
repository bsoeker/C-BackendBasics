conan install . -s build_type=Release --build=missing --output-folder=build
cd build
cmake .. -G "Ninja" -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAINFILE="conan_toolchain.cmake" // toolchain flag can be removed because it is also specified at the cmakelists.txt
ninja