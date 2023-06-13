//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int opcion;
	float num1, num2, suma, resta, multiplicacion, division;

	cout<<" MENU OPCIONES "<<endl;
	cout<<" 1. Sumar  "<<endl;
	cout<<" 2. Restar  "<<endl;
	cout<<" 3. Multiplicar  "<<endl;
	cout<<" 4. Dividir  "<<endl;
	cout<<"Elegir una opción del menú ";
	cin>>opcion;

	switch(opcion){
        case 1:
            cout<<"Ingrese el primer número: ";
            cin>>num1;
            cout<<"Ingrese el segundo número: ";
            cin>>num2;
            suma = num1 + num2;
            cout<<"La suma es: "<<suma;
        break;
        case 2:
            cout<<"Ingrese el primer número: ";
            cin>>num1;
            cout<<"Ingrese el segundo número: ";
            cin>>num2;
            resta= num1 - num2;
            cout<<"La resta es: "<<resta;
        break;
        case 3:
            cout<<"Ingrese el primer número: ";
            cin>>num1;
            cout<<"Ingrese el segundo número: ";
            cin>>num2;
            multiplicacion = num1 * num2;
            cout<<"La multiplicación es: "<<multiplicacion;
        break;

        case 4:
            cout<<"Ingrese el primer número: ";
            cin>>num1;
            cout<<"Ingrese el segundo número: ";
            cin>>num2;
            division = num1 / num2;
            cout<<"La división es: "<<division;
        break;

        default:
            cout<<"Opción inválida";

	}

	return 0;
}
