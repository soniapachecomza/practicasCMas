//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
using namespace std;

int main(){

	int prueba[4], a;
	for(int i=0; i <5;i++){
        cout << "Ingresa un datos: ";
        cin >> a;
        prueba[i]=a;
	}
	for (int i=0; i<5 ;i++){
        cout << prueba[i]<< endl;
	}
	return 0;
}
