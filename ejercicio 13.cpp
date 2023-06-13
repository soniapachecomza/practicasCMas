//Nombre:
//TP N°:3
//EJ N°:13
//Comentarios:Hacer un programa para ingresar un número y luego informar todos los divisores de ese número.
//Ejemplo 1. Si se ingresa 6 se listarán: 1, 2, 3 y 6
//Ejemplo 2. Si se ingresa 9 se listarán: 1, 3 y 9.
//Ejemplo 3. Si se ingresa 11 se listarán 1 y 11.

#include<iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "Los divisores de " << num << " son: ";

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
	return 0;
}
