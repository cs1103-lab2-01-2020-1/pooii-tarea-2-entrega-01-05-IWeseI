#include "lib.h"
#include "ejercicio2/ejercicio2.h"
#include "ejercicio3/ejercicio3.h"
#include "ejercicio4/ejercicio4.h"
#include "sistema_logistico/implementacion.h"

int main() {
    //ejercicio1
    cout<<"ejercicio1:"<<endl;
    sistema_logistico();
    //ejercicio2
    cout<<"ejercicio2:"<<endl;
    Lifo a(5);
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    cout<<a.top_value()<<endl;
    a.pop();
    cout<<a.top_value()<<endl;

    Lifo b(3);
    cout<<b.empty()<<endl;
    b.push_back(4);
    b.push_back(8);
    b.push_back(12);
    cout<<b.full()<<endl<<b.top_value()<<endl;
    b.pop();
    cout<<b.top_value()<<endl;
    //ejercicio3
    cout<<"ejercicio3:"<<endl;
    int first[8] = {98,20,23,40,14,43,70};
    int second[4] = {30,25,46,78};
    list<int> first1 = ejercicio3(first,8,second,4).first;
    list<int> second1 = ejercicio3(first,8,second,4).second;
    first1.sort();
    auto it = first1.begin();
    for(int i = 0; i<first1.size()-1; i++){
        it++;
        cout<<*it<<", ";
    }
    cout<<endl;

    //ejercicio4
    cout<<"ejercicio4:"<<endl;
    Lifo_temp<char> c;
    cout<<c.empty()<<endl;
    c.push_back('a');
    c.push_back('l');
    c.push_back('o');
    c.push_back('h');
    cout<<c.top_value();c.pop();cout<<c.top_value();c.pop();cout<<c.top_value();c.pop();cout<<c.top_value();c.pop();
    cout<<endl;

    Lifo_temp<string> d;
    d.push_back("201910211 Juan Pablo Lozada");
    cout<<d.top_value();

    return 0;
}
