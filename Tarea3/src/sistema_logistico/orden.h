

#ifndef TAREA3_ORDEN_H
#define TAREA3_ORDEN_H
#include "../lib.h"
#include "producto.h"

class orden {
private:
    vector<producto> productos;
    string transporte;
    pair<int,int> destino;
    pair<int,int> posicion;
public:
    orden();
    orden(string t, int d1, int d2);
    void agregar_producto(producto p);
    void set_destino(int d1,int d2);
    void pos_actual(int d1, int d2);
    pair<int,int> get_destino();
    vector<producto> get_productos();



};


#endif //TAREA3_ORDEN_H
