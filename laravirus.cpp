//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna: sospecha de Laravirus: temperatura > 37.5 y dolor de cabeza
#include<iostream>
using namespace std;

int main(){
	float temperatura;
	char dc;

	cout << "Ingrese la temperatura: ";
	cin >> temperatura;

	cout << endl << "Ingrese si presenta dolor de cabeza (S/N): ";
	cin >> dc;

	if(temperatura > 37.5 && 'S'){
        cout << "Posible Laravirus" << endl;
	}
	else{
        cout << "Todo bien" << endl;
	}
	return 0;
}
