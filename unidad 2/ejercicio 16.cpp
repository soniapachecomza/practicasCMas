//Nombre:Sonia
//TP N°:2
//EJ N°:16
//Comentarios:Hacer un programa para ingresar por teclado cuatro números.
// Si los valores que se ingresaran están ordenados en forma creciente,
// emitir el mensaje “Conjunto Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”.
//Ejemplo 1: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados.
//Ejemplo 2: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados.
//Ejemplo 3: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.

#include<iostream>
using namespace std;

int main(void){
	int num1, num2, num3, num4;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    cout << "Ingrese el cuarto numero: ";
    cin >> num4;

    if (num1 < num2 && num2 < num3 && num3 < num4) {
        cout << "Conjunto Ordenado";
    } else {
        cout << "Conjunto Desordenado";
    }

	return 0;
}
