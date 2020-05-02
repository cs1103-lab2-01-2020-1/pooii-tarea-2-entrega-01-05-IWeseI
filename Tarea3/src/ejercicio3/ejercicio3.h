
#ifndef TAREA3_EJERCICIO3_H
#define TAREA3_EJERCICIO3_H
#include "../lib.h"

pair<list<int>,list<int>> ejercicio3(int a[],int size_a, int b[], int size_b){
    list<int> a1 (a, a+size_a);
    list<int> b1 (b,b+size_b);
    return {a1,b1};
}

#endif //TAREA3_EJERCICIO3_H
