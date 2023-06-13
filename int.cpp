//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	int largoArre = 5;
	int nrosArreglo[largoArre];

	nrosArreglo[0] = 13;
	nrosArreglo[1] = 21;
	nrosArreglo[4] = 62;

	cout << "Valores del arreglo: ";
	for(int i = 0; i < 4; i++){
        cout << "Valor[ "<< "] = " << nrosArreglo[i]<< endl;
	}
	return 0;
}
