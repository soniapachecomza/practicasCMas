//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
	//variables
	float peso = 0;
	float altura = 0;
	float resultado = 0;

	cout << "Calculadora de Indice de Masa Corporal (IMC)\n";
	cout << "Ingrese su peso en kilogramo: ";
	cin >> peso;
	cout << "Ingreso su altura en metros: ";
	cin >> altura;
	//resultado de IMC
	resultado = peso / pow(altura,2);
	cout << "Su IMC es: " <<setprecision(4) <<resultado<< " kg/m^2";
	return 0;
}
