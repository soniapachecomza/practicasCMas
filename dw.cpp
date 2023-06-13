//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	int nro;
	bool condicion;
	do{
        cout << "Ingresa un numero positivo: ";
        cin >> nro;
        condicion = nro > 0;

	}while (!condicion);
	cout << "Numero ingresado positivo: "<< nro << endl;
	return 0;
}
