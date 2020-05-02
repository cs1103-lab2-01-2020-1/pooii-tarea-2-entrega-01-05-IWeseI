

#include "producto.h"

#include <utility>

producto::producto() {
    nombre = "a";
    costo = 0;
}

producto::producto(string n, float c) {
    nombre = n;
    costo = c;
}

float producto::get_costo() {
    return costo;
}

string producto::get_nombre() {
    return nombre;
}
