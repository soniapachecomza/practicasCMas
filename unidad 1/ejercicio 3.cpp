//Nombre:Sonia Pacheco
//TP N°:1
//EJ N°:Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000 de premio por cada auto vendido.
// Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla
// el sueldo total a pagar.Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $ 23.000.

//Comentarios:
#include<iostream>
using namespace std;

int main(void){
	int ventas;
	float sueldo_pagar;
	cout << "Cantidad de autos vendidos por un vendedor: ";
    cin >> ventas;
    sueldo_pagar= 15000 + (2000*ventas);

    cout << "Sueldo a pagar:$ "<<sueldo_pagar <<endl;
	return 0;
}
