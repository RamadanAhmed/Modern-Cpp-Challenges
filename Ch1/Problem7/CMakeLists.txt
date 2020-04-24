cmake_minimum_required (VERSION 3.14)

project (Problem7)

# Include sub-projects.
add_executable(Problem7)

target_sources(Problem7 PRIVATE main.cpp)

target_compile_features(Problem7 PRIVATE cxx_std_17)