//Nombre:Sonia Pacheco
//TP N°:2
//EJ N°:1
//Comentarios:Hacer un programa para ingresar por teclado un número y luego emitir
// por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.

#include<iostream>
using namespace std;

int main(void){
	int num;

	cout << "Ingrese un numero: ";
	cin >> num;

	if(num > 0){
        cout << "El numero ingresado es positivo";

	} else if (num < 0){
        cout << "El numero ingresado es negativo";
	} else {
        cout << "El numero ingresado es cero";
	}
	return 0;
}
