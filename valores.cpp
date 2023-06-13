//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
    //declaracion
	int entero;
	//entrada
	cout << "Introduce un numero: ";
	cin>>entero;
	//valor
	cout << "Valor entero: "<< entero << endl;

	// variable cadena
	string nombre;
	cout << "Introduce tu nombre: "<< endl;
	//cin>>nombre;
	cin.ignore();
	getline(cin, nombre);
	cout << "Valor nombre: "<< nombre << endl;
	return 0;
}
