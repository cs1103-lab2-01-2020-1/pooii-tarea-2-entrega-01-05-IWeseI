
#ifndef TAREA3_PRODUCTO_H
#define TAREA3_PRODUCTO_H
#include "../lib.h"

class producto {
private:
    string nombre;
    float costo;
public:
    producto();
    producto(string n, float c);
    float get_costo();
    string get_nombre();
};


#endif //TAREA3_PRODUCTO_H
