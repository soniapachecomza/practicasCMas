//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	int entero = 10;
	float flotante = 2.8;
	double doble = 6.999;
	char caracter = 'A';
	bool boleano = false;
	char cadena[] = "Hola";
	cout << "Int tamanio bytes: "<< sizeof(entero)<< endl;
	cout << "Float tamanio bytes: "<< sizeof(flotante)<< endl;
	cout << "double tamanio bytes: "<< sizeof(doble)<< endl;
	cout << "Char tamanio bytes: "<< sizeof(caracter)<< endl;
	cout << "bool tamanio bytes: "<< sizeof(boleano)<< endl;
	cout << "cadena tamanio bytes: "<< sizeof(cadena)<< endl;
	return 0;
}
