cmake_minimum_required(VERSION 3.16)
project(Tarea3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tarea3 src/main.cpp src/sistema_logistico/orden.cpp src/sistema_logistico/orden.h
         src/sistema_logistico/producto.cpp src/sistema_logistico/producto.h src/lib.h
         src/ejercicio2/ejercicio2.h src/ejercicio4/ejercicio4.h src/sistema_logistico/implementacion.h
        src/sistema_logistico/mapa.cpp src/sistema_logistico/mapa.h src/ejercicio3/ejercicio3.h)