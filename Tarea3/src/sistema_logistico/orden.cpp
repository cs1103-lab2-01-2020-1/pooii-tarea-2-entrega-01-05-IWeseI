

#include "orden.h"

orden::orden() {
transporte = "a";
posicion = {0,0};
}

orden::orden(string t, int d1, int d2) {
transporte = t;
destino = {d1,d2};
posicion = {0,0};
}

void orden::agregar_producto(producto p) {
productos.push_back(p);
}

void orden::pos_actual(int d1, int d2) {
    posicion = {d1,d2};
}

pair<int, int> orden::get_destino() {
    return destino;
}

vector<producto> orden::get_productos() {
    return productos;
}

void orden::set_destino(int d1, int d2) {
    destino = {d1,d2};
}
