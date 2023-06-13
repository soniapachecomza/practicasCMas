//Nombre:Sonia Pacheco
//TP N°:2
//EJ N°:10
//Comentarios:Hacer un programa para ingresar tres números y listar el máximo de ellos.
#include<iostream>
using namespace std;

int main(void){
	int num1, num2, num3, max;

	cout << "Ingrese el primer numero: ";
	cin >> num1;

	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	cout << "Ingrese el tercer numero: ";
	cin >> num3;

	max = num1;

	if(num2 > max){
        max = num2;
	}

	if (num3 > max){
        max = num3;
	}
	cout << "El maximo es: "<< max;
	return 0;
}
