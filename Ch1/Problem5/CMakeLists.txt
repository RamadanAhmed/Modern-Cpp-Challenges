cmake_minimum_required (VERSION 3.14)

project (Problem5)

# Include sub-projects.
add_executable(Problem5)

target_sources(Problem5 PRIVATE main.cpp)

target_compile_features(Problem5 PRIVATE cxx_std_17)