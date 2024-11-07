cmake_minimum_required(VERSION 3.29)
project(ExerciceSerie5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ExerciceSerie5
    main.cpp
    main.h
        Save_text.cpp
        Read_write_file.cpp
        Redirection_Cin.cpp
        Formatage_divers.cpp
        Formatage_info.cpp
        Input_controler.cpp
        Buffer.cpp)
