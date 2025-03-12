Minimal C++20 modules example
=============================

Requirements:
1. ninja
2. cmake 3.25+
3. gcc 14 OR clang 16 OR MSVC 2022

Building
--------

### Building on linux

1. Install global requirements: `sudo apt install ninja-build cmake`
2. Then install g++: `sudo apt install g++` or clang `sudo apt install clang clang-tools`
3. Run `./build.sh`


### Building on windows

1. Install global requirements: `winget install --id=Kitware.CMake  -e` and `winget install --id=Ninja-build.Ninja  -e`
2. Install Visual Studio 2022 or newer
3. Run `cmake . -B build -G Ninja`
4. Run `cmake --build build`
