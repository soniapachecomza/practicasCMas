//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;
int cambiarValor(string &param){
    param = "Adios";
}
int main(){
	string arg = "Hola";
	cout << "Antes llamar funcion: "<< arg << endl;
	cambiarValor( arg );
	cout << "Despues llamar funcion: "<< arg << endl;
	return 0;
}
