//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	//op. logico
	bool a = true;
	bool b = false;
	cout << "Valor a: "<< a << endl;
	cout << "Valor b: "<< b << endl;
	// and &&
	bool c = a && b;
	cout << "Resultado del operador and: "<< c << endl;
	// or o O
	bool d = a || b;
	cout << "Resultado del operador or: "<< d << endl;
	//not
	bool e = a != b;
	cout << "Resultado del operador not: "<< e << endl;
	return 0;
}
