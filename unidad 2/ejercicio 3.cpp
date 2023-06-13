//Nombre:Sonia Pacheco
//TP N°:2
//EJ N°:3
//Comentarios:Hacer un programa para ingresar por teclado un número
// y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.
#include<iostream>
using namespace std;

int main(void){
	int num;

	cout << "Ingrese un numero: ";
	cin >> num;

	if(num %2==0){
        cout << "El numero ingresado es par"<<endl;

	} else {
        cout << "El numero ingresado es impar"<<endl;
	}
	return 0;
}
