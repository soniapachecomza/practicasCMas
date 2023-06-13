//Nombre:Sonia Pacheco
//TP N°:1
//EJ N°:5
//Comentarios:Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar
// por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje
//de ventas para cada una de ellas.Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa
// calculará e informará A: 50%, B: 12,50% y C: 37,50%.

#include<iostream>
using namespace std;

int main(void){
	int A, B, C;
    float cant_ventas, porcA, porcB, porcC;

	cout << "Ingresa la cantidad de alfajores A vendidos: ";
	cin >> A;

	cout << "Ingresa la cantidad de alfajores B vendidos: ";
	cin >> B;

	cout << "Ingresa la cantidad de alfajores C vendidos: ";
	cin >> C;
    cant_ventas = A + B+ C;

    porcA= (float)A/cant_ventas * 100;
    porcB= (float)B/cant_ventas * 100;
    porcC= (float)C/cant_ventas * 100;

	cout << "El porcentaje de ventas de A es de: " << porcA << "%" << endl;
	cout << "El porcentaje de ventas de B es de: " << porcB << "%"<< endl;
	cout << "El porcentaje de ventas de C es de: " << porcC << "%"<< endl;
	return 0;
}
