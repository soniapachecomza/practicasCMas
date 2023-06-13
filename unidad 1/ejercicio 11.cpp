//Nombre:Sonia Pacheco
//TP N°:1
//EJ N°:11
//Comentarios:Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por
// pantalla a cuántos días, horas y minutos equivalen.
//Ejemplo 1: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
//Ejemplo 2: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.

#include<iostream>
using namespace std;

int main(void){
	int dias;
	int horas;
	int minutos;
	int restoMin;

	cout << "Ingrese la cantidad de minutos: ";
	cin >> minutos;

	dias=minutos/1440;
	horas=(minutos%1440)/60;
	restoMin=(minutos%1440)%60;

	cout << "Equivalen a "<<dias<<" dias,"<<horas<<" horas y "<<restoMin<< " minutos"<<endl;

	return 0;
}
