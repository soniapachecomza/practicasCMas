//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	string cadena = "Hola mundo";
	string subcadena1 = cadena.substr(0, 4);
	cout << "subcadena: "<< subcadena1 << endl;
	string subcadena2 = cadena.substr(5, 9);
	cout << "subcadena2: "<< subcadena2 << endl;
	return 0;
}
