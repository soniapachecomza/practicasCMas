//Nombre:Sonia Pacheco
//TP N�:
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
	cout<<"Elegir una opci�n del men� ";
	cin>>opcion;

	switch(opcion){
        case 1:
            cout<<"Ingrese el primer n�mero: ";
            cin>>num1;
            cout<<"Ingrese el segundo n�mero: ";
            cin>>num2;
            suma = num1 + num2;
            cout<<"La suma es: "<<suma;
        break;
        case 2:
            cout<<"Ingrese el primer n�mero: ";
            cin>>num1;
            cout<<"Ingrese el segundo n�mero: ";
            cin>>num2;
            resta= num1 - num2;
            cout<<"La resta es: "<<resta;
        break;
        case 3:
            cout<<"Ingrese el primer n�mero: ";
            cin>>num1;
            cout<<"Ingrese el segundo n�mero: ";
            cin>>num2;
            multiplicacion = num1 * num2;
            cout<<"La multiplicaci�n es: "<<multiplicacion;
        break;

        case 4:
            cout<<"Ingrese el primer n�mero: ";
            cin>>num1;
            cout<<"Ingrese el segundo n�mero: ";
            cin>>num2;
            division = num1 / num2;
            cout<<"La divisi�n es: "<<division;
        break;

        default:
            cout<<"Opci�n inv�lida";

	}

	return 0;
}
