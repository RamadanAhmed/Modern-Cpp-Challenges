cmake_minimum_required (VERSION 3.14)

project (Problem1)

# Include sub-projects.
add_executable(Problem1)

target_sources(Problem1 PRIVATE main.cpp)

target_compile_features(Problem1 PRIVATE cxx_std_17)