//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
using namespace std;

int main(){
	int dados1, dados2, diferencia;
    int puntosAcumulados = 0, puntosRonda = 0;
    for(int i=1; i<=3; i++){
        cout << "Ingrese dado 1: ";
        cin >> dados1;

        cout << "Ingrese dado 2:" ;
        cin >> dados2;

        diferencia = dados1 - dados2;

        if(diferencia < 0){
            diferencia *= -1;
        }
        else if((dados1 == 1 || dados1 == 6) && dados1 == dados2){
            puntosRonda = 10;
        }
        else if(diferencia > 1){
            puntosRonda = diferencia;
        }
        else if(diferencia == 1 || diferencia ==6){
            puntosAcumulados = 0;
            puntosRonda = 0;
        }
        else {
            puntosRonda = 0;
        }
        puntosAcumulados += puntosRonda;

        cout << "Puntaje  por ronda: " << puntosRonda << endl;
        cout << "Puntaje  acumulado: " << puntosAcumulados << endl;
    }
	cout << "Puntaje  acumulado: " << puntosAcumulados << endl;
	return 0;
}
