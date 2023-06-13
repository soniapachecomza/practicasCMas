//Nombre:Sonia
//TP N°:3
//EJ N°:4
//Comentarios:Hacer un programa para que el usuario ingrese dos números y luego
// el programa muestre por pantalla los números entre el menor y el mayor de ambos.
// Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15;
// y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
#include<iostream>
#include<locale.h>
using namespace std;

#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    int num1, num2, menor, mayor;
    cout << "Ingrese dos numeros enteros separados por espacio: ";
    cin >> num1 >> num2;

    if (num1 < num2) {
        menor = num1;
        mayor = num2;
    } else {
        menor = num2;
        mayor = num1;
    }

    cout << "Numeros entre " << menor << " y " << mayor << ": ";
    for (int i = menor; i <= mayor; i++) {
        cout << i << " ";
    }

    cout << endl;
	return 0;
}
