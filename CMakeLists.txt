cmake_minimum_required(VERSION 3.24)

project(Hilbert_space_fragmentation)

add_executable(Hilbert_space_fragmentation main.cpp)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)

target_link_libraries(Hilbert_space_fragmentation Eigen3::Eigen)