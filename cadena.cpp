//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	string cadena = "hola mundo";
	cout << "Largo Cadena: "<< cadena.length() << endl;


    for(int i = 0; i < cadena.length(); i++){
        cout << " - "<< cadena[i]<< endl;
	}
	return 0;
}
