cmake_minimum_required (VERSION 3.14)

project (Problem2)

# Include sub-projects.
add_executable(Problem2)

target_sources(Problem2 PRIVATE main.cpp)

target_compile_features(Problem2 PRIVATE cxx_std_17)