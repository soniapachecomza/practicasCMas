//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //entero
	int entero = 10;
	cout << "Entero: " << entero <<endl;
	//t. flotante
	float flotante = 8.9;
	cout << fixed << setprecision(2);
	cout << "Flotante: "<< flotante << endl;
	//t. doble
	double doble = 9.99999;
	cout << "Doble: "<< doble << endl;
	//t. char
	char caracter = 'A';
	char caracterDecimal = 65;
	cout << "Caracter: "<< caracter << endl;
	cout << "Caracter en decimal: "<< caracterDecimal << endl;
    //t. bool
    bool boleano = true;
    cout << "Boleano: "<< boleano << endl;
    // cadena
    char cadenal[] = "Hola";
    cout << "Cadena: "<< cadenal << endl;
    //cadena con string
    string cadena2 = "Adios";
    cout << "cadena 2: "<< cadena2 << endl;
	return 0;
}
