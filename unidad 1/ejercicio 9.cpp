//Nombre:Sonia Pacheco
//TP N°:1
//EJ N°:9
//Comentarios:Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla
// a cuantas horas y minutos equivalen.
//Ejemplo 1: si se ingresan 380 minutos el programa mostrará por pantalla que equivalen a 6 horas y 20 minutos.
//Ejemplo 2: si se ingresan 720 minutos el programa mostrará por pantalla que equivalen a 12 horas y 0 minutos.
//Ejemplo 3: si se ingresan 50 minutos el programa mostrará por pantalla que equivalen a 0 horas y 50 minutos

#include<iostream>
using namespace std;

int main(void){
	int minutos;
	int horas;
	int restoMin;

	cout << "Ingresa la cantidad de minutos: ";
	cin >> minutos;

    horas = minutos/60;
    restoMin = minutos%horas;

    cout << "Equivalen a "<<horas<<" horas y "<<restoMin<<" minutos"<<endl;


	return 0;
}
