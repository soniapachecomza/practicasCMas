//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	int min = 0, max = 5;
	int dato;
	cout << "Ingresa un numero entre 0 y 5: "<<endl;
	cin >> dato;
	bool dentroRango = dato >= min && dato <= max;
	cout<< "Valor dentro del rango: "<< dentroRango<<endl;
	return 0;
}
