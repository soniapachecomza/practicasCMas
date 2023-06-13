//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	int edad;
	bool empleadoConfianza;
	string nombreCompleto;
	float sueldo;

	cout << "Introduce tu nombre completo: "<< endl;
	getline(cin, nombreCompleto);
	cout << "Introduce tu edad: "<< endl;
	cin>>edad;
    cout << "Introduce tu sueldo: "<< endl;
	cin>>sueldo;
	cout << "Eres un empleado de confianza (1 - true, 2 - false): "<< endl;
	cin>>empleadoConfianza;
	// imprimir
	cout << "\La informacion proporcionada es: "<< endl;
	cout << "Nombre: "<<nombreCompleto<< endl;
    cout << "Edad: "<<edad<< endl;
	cout << "Sueldo: "<<sueldo<< endl;
	cout << "Es de confianza o no: "<< empleadoConfianza<< endl;

	return 0;
}
