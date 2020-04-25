cmake_minimum_required (VERSION 3.14)

project (Problem8)

# Include sub-projects.
add_executable(Problem8)

target_sources(Problem8 PRIVATE main.cpp)

target_compile_features(Problem8 PRIVATE cxx_std_17)