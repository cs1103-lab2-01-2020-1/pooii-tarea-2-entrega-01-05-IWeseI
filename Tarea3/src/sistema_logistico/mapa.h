
#ifndef TAREA3_MAPA_H
#define TAREA3_MAPA_H
#include "../lib.h"
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <cstdlib>
class mapa {
private:
    vector<vector<string>> map;
    pair<int,int> destino;
public:
    mapa();
    void set_detino(int d1, int d2);
    void movimiento();
};


#endif //TAREA3_MAPA_H
