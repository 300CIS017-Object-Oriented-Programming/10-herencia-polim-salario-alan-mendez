cmake_minimum_required(VERSION 3.10)
project(SueldosPOO)  # Nombre del proyecto

set(CMAKE_CXX_STANDARD 17)


set(SOURCE_FILES
        main.cpp
        Empleado.cpp
        DesarrolladorJunior.cpp
        DesarrolladorSenior.cpp
        LiderTecnico.cpp
        Tester.cpp
        SistemaNomina.cpp
)


add_executable(SueldosPOO ${SOURCE_FILES})