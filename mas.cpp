//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;
int suma(int a, int b){
    int resultadoSuma = a + b;

}
int main(){
	int argA, argB, resultado;

	cout << "Ingresa el primer numero: ";
	cin >> argA;
	cout << "Ingresa el segundo numero: ";
	cin >> argB;

	resultado = suma(argA,argB);
	cout<< "El resultado de la suma: "<<resultado<< endl;
	return 0;
}
