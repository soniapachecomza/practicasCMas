//Nombre:Sonia Pacheco
//TP N°:2
//EJ N°:7
//Comentarios:Hacer un programa para ingresar por teclado tres números e informar
// con una leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario
//no emitir nada. Ayuda: Si A es distinto de B y B es distinto de C, eso no signica que A
//y C sean distintos. Ejemplo: A=8, B=6 y C=8.
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

	if (num1 != num2 && num2 != num3){
        cout << "Los tres numeros ingresados no son iguales";
	}
	return 0;
}
