//Nombre:Sonia Pacheco
//TP N°:2
//EJ N°:2
//Comentarios:Hacer un programa para ingresar por teclado dos números y luego
//informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.
#include<iostream>
using namespace std;

int main(void){
	int num1, num2;

	cout << "ingrese el primer numero: ";
	cin >> num1;

	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	if (num1 % num2==0){
        cout << "El primer numero es multiplo de 2"<<endl;

	} else {
        cout << "El primer numero no es multiplo de 2"<<endl;
	}
	return 0;
}
