//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){

	cout << "Introduce el tamaño del arreglo: ";
	int nroElementos;
	cin>> nroElementos;

    int *nroArr = new int[nroElementos];

    for(int i = 0; i < nroElementos; i++){
        cout << "Introduce el valor: "<< i + 1 << ": ";
        cin >> nroArr[i];
    }
	cout << "valor nroElementos = "<< nroElementos << endl;
	for(int i = 0; i <= nroElementos - 1; i++){
        cout << "Valor ["<< i<< "] = " << nroArr[i]<< endl;
     }
	return 0;
}
