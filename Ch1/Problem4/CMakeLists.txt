cmake_minimum_required (VERSION 3.14)

project (Problem4)

# Include sub-projects.
add_executable(Problem4)

target_sources(Problem4 PRIVATE main.cpp)

target_compile_features(Problem4 PRIVATE cxx_std_17)