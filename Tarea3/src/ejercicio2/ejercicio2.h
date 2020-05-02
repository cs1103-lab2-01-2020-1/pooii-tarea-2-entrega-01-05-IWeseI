
#ifndef TAREA3_EJERCICIO2_H
#define TAREA3_EJERCICIO2_H
#include "../lib.h"

class Lifo{
private:
    int* arr;
    int capacity;
    int top;
public:

    Lifo(int c){
        capacity = c;
        top = -1;
        arr = new int[capacity];
    }
    void push_back(int num){
        if(full()) return;
        top = top +1;
        arr[top] = num;
    }
    void pop(){
        if(empty())return;
        top= top -1;
    }

    int size_of(){
        return (top+1);
    }

    bool empty(){
        return (top==-1);
    }

    bool full(){
        return (top == capacity-1);
    }

    int top_value(){
        return arr[top];
    }

};

#endif //TAREA3_EJERCICIO2_H
