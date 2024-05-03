//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
using namespace std;

int main(){
	int opcion = 0;
	int a, b;
    cout << "Opcion 1: suma \nOpcion 2: resta \nOpcion 3: division \nOpcion 4: multiplicar";
	cout << "\nIngresa una opcion: ";
	cin>> opcion;

	switch(opcion){
    case 1:
        cout << "Ingresa un numero: ";
        cin>>a;
        cout << "Ingresa un numero: ";
        cin >> b;

        cout << a+b;
        break;
    case 2:
        cout << "Ingresa un numero: ";
        cin>>a;
        cout << "Ingresa un numero: ";
        cin >> b;

        cout << a-b;
        break;
    case 3:
        cout << "Ingresa un numero: ";
        cin>>a;
        cout << "Ingresa un numero: ";
        cin >> b;

        cout << a/b;
    break;
    case 4:
        cout << "Ingresa un numero: ";
        cin>>a;
        cout << "Ingresa un numero: ";
        cin >> b;

        cout << a*b;
        break;
    default: "El dato ingresado no es una opcion valida";
	}
	return 0;
}
