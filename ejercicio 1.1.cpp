//Nombre:Sonia
//TP N�:3
//EJ N�:1
//Comentarios:Hacer un programa para mostrar por pantalla los n�meros del 1 al 20
// salteando de a 3 elementos. Es decir: 1, 4, 7, 10, 13, 16, 19.

//Importante: El programa no tiene ning�n ingreso de datos.

#include<iostream>
using namespace std;

int main(void){
	 for (int i = 1; i <= 20; i += 3) {
        cout << i << " ";
    }

    cout << endl;
	return 0;
}
