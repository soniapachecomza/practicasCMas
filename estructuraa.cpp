//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
using namespace std;
// estructruas declaradas aquí
struct pokemon{
    char nombre[50];
    char tipo[50];
    float peso;
    char genero;
}pokemon1;
int main(){

	cout << "Ingresa el  nombre de su pokemon: "<<"\n";
	cin.getline(pokemon1.nombre,50,'\n');
	cout << "Ingresa el tipo de pokemon: "<<"\n";
	cin.getline(pokemon1.tipo,50,'\n');
	cout << "Ingresa el peso del pokemon: "<<"\n";
	cin >> pokemon1.peso;
	cout << "Ingresa el genero del pokemon: "<<"\n";
	cin >> pokemon1.genero;

	cout << "Nombre del pokemon "<<pokemon1.nombre<<"\n";
	cout << "Tipo del pokemon "<<pokemon1.tipo<<"\n";
	cout << "Peso del pokemon "<<pokemon1.peso<<"\n";
	cout << "Genero del pokemon "<<pokemon1.genero<<"\n";

	return 0;
}
