cmake_minimum_required (VERSION 3.14)

project (Problem6)

# Include sub-projects.
add_executable(Problem6)

target_sources(Problem6 PRIVATE main.cpp)

target_compile_features(Problem6 PRIVATE cxx_std_17)