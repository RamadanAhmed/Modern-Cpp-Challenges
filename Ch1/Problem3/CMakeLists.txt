cmake_minimum_required (VERSION 3.14)

project (Problem3)

# Include sub-projects.
add_executable(Problem3)

target_sources(Problem3 PRIVATE main.cpp)

target_compile_features(Problem3 PRIVATE cxx_std_17)