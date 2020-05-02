
#ifndef TAREA3_IMPLEMENTACION_H
#define TAREA3_IMPLEMENTACION_H
#include "orden.h"
#include "producto.h"
#include "mapa.h"

void sistema_logistico() {
    orden a;
    int n = 0;
    int costo = 0;
    int d1; int d2;
    string x = "a";
    cout << "Ingrese nombre de usuario:";
    cin >> x;
    cout << endl;
    cout << "Buenos dias " << x << ", Cuantos productos desea agregar a su orden?";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "Que producto desea agregar?";
        cin >> x;
        cout << endl;
        producto p(x,10);
        a.agregar_producto(p);
        costo = costo + p.get_costo();
    }
    cout << "El costo total de su orden es de " << costo << endl;

    cout<<"Ingrese su direccion en coordenadas: ";cin>>d1;cin>>d2;cout<<endl;
    while(d1> abs(10)&& d2> abs(10)){
        cout<<"Su direccion esta fuera de rango, ingrese una nueva direccion:";cin>>d1;cin>>d2;cout<<endl;
    }
    a.set_destino(d1,d2);
    cout<<"La orden esta en camino"<<endl;
    mapa m;
    m.set_detino(d1,d2);
    m.movimiento();

}

#endif //TAREA3_IMPLEMENTACION_H
