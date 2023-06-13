//Nombre:Sonia
//TP N°:2
//EJ N°:9
//Comentarios:Basado en los 2 ejercicios anteriores, hacer un programa para ingresar
//por teclado la longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es:
//- Equilátero: si los tres lados son iguales.
//- Isósceles: si dos de los tres lados son iguales.
//- Escaleno: si los tres lados son distintos entre sí.

#include<iostream>
using namespace std;

int main(void){
			int num1, num2, num3;

	cout << "Ingrese el primer numero: ";
	cin >> num1;

	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	cout << "Ingrese el tercer numero: ";
	cin >> num3;

	if (num1 == num2 && num2 == num3){
        cout << "El triangulo es equilatero";
	} else if (num1 == num2 && num2 != num3){
        cout << "El triangulo es isoceles";
	} else {
        cout << "El triangulo es escaleno";
	}
	return 0;
}
