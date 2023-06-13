//Nombre:Sonia Pacheco
//TP N°:2
//EJ N°:8
//Comentarios:Hacer un programa para ingresar cinco números y listar el máximo de ellos.
#include<iostream>
using namespace std;

int main(void){
	int num1, num2, num3,num4, num5, max;

	cout << "Ingrese el primer numero: ";
	cin >> num1;

	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	cout << "Ingrese el tercer numero: ";
	cin >> num3;

	cout << "Ingrese el cuarto numero: ";
	cin >> num4;

	cout << "Ingrese el quinto numero: ";
	cin >> num5;

	max = num1;

	if(num2 > max){
        max = num2;
	}

	if (num3 > max){
        max = num3;
	}

	if (num4 > max){
        max = num4;
	}

	if (num5 > max){
        max = num5;
	}
	cout << "El maximo es: "<< max;
	return 0;
}
