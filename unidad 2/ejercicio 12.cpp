//Nombre:Sonia
//TP N°:2
//EJ N°:12
//Comentarios:Hacer un programa para leer tres números diferentes y determinar
//e informar el número del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.
#include<iostream>
using namespace std;

int main(void){
	int num1, num2, num3, med;

	cout << "Ingrese el primer numero: ";
	cin >> num1;

    cout << "Ingrese el segundo numero: ";
	cin >> num2;

    cout << "Ingrese el tercer numero: ";
	cin >> num3;

	if ((num1 > num2 && num1 < num3)|| (num1 < num2 && num1 > num3)){
        med=num1;
	} else if ((num2 > num1 && num2 < num3)|| (num2 < num1 && num2 > num3)){
        med=num2;
	} else{
        med=num3;
	}
	cout << "El numero del medio es: "<< med;
	return 0;
}
