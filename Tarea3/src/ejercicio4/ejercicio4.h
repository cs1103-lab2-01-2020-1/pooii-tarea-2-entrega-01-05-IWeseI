//
// Created by Wese on 1/05/2020.
//

#ifndef TAREA3_EJERCICIO4_H
#define TAREA3_EJERCICIO4_H
#include "../lib.h"

template <typename T>
class Lifo_temp{
private:
    vector<T> v;
    int top;
public:
    Lifo_temp(){
        v = {};
        top =-1;
    }
    void pop(){
        if (empty())return;
        v.pop_back();
        top--;
    }
    void push_back(T element){
        top++;
        v.push_back(element);
    }
    bool empty(){
        return (top ==-1);
    }
    T top_value(){
        return v[top];
    }
    int size_of(){
        return v.size();
    }
};
#endif //TAREA3_EJERCICIO4_H
