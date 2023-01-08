cmake_minimum_required(VERSION 3.10)

project(hello CXX)

add_executable(hello 
    main.cpp    
)

target_compile_features(hello PUBLIC cxx_std_17)