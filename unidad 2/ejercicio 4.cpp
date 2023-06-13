//Nombre:Sonia Pacheco
//TP N°:2
//EJ N°:4
//Comentarios:
#include<iostream>
#include<cstdlib>
using namespace std;

int main(void){
	int num1, num2, diferencia;

	cout << "Ingrese el primer numero: ";
	cin >> num1;

	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	diferencia = abs(num1 - num2);

	cout << "La diferencia absoluta entre  "<<num1<< " y "<<num2<< " es: "<<diferencia;
	return 0;
}
