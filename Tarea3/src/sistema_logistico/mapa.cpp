

#include "mapa.h"


mapa::mapa() {
destino = {0,0};
vector<string> a = {};
vector<vector<string>> b = {};
for(int j = 0; j<21; j++){
    a.push_back("|_|");
}
for(int i = 0; i<21; i++){
    b.push_back(a);
}
map = b;

}

void mapa::set_detino(int d1, int d2) {
    destino = {d1,d2};
}

void mapa::movimiento() {
    map[10][10]= " PE";
    map[destino.first][destino.second]= " DE";
    for (int i = 0; i<21; i++){
        for (int j = 0; j<21; j++){
            cout<<map[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    int d1 = 10;
    int d2 = 10;
    map[10][10]= "|_|";
    for (int i = 0; i<(10-abs(destino.first)+10-abs(destino.second))-1;i++){
        map[d1][d2]= "|_|";
        if (d1 == destino.first){
            d2 = d2-((d2-destino.second)/(d2-destino.second));
        }
        else{
            d1 = d1-((d1-destino.first)/(d1-destino.first));
        }
        map[d1][d2]= " PE";
        _sleep(2000);
        for (int x = 0; x<21; x++){
            for (int j = 0; j<21; j++){
                cout<<map[x][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<"La orden llego a su destino"<<endl;
}
