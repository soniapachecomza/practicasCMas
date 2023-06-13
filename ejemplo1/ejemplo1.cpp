#include <iostream>
using namespace std;

int main(){


    float vec[5][7] = {};
    int i, sabor, sucursal;
    float peso;

    cin >> sabor;
    while(sabor != 0){
        cin >> sucursal;
        cin >> peso;
        vec[sabor-1][sucursal-1] += peso;
        cin >> sabor;
    }
        for(i=0; i<5; i++){
                for(j=0; j<7; j++){
                cout << "sabor: " << i+1 << "Peso acumulado: " << vec[i][j] << endl;
            }
}

        return 0;
}
