//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;
void saludar(string);
int main(){
	string argMensaje;
	cout << "Ingresa tu mensaje: " << endl;
	//cin >> argMensaje;
    getline(cin,argMensaje);
    saludar(argMensaje);
	return 0;
}
void saludar(string mensaje){
cout << "Mensaje: "<<mensaje << endl;
}
