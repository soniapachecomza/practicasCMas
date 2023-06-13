//Nombre:
//TP N°:
//EJ N°:
//Comentarios:
#include<iostream>
using namespace std;

int main(void){
	int num1, num2, camb;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    camb = num1;
    num1 = num2;
    num2 = camb;

    cout << "Los numeros intercambiados son " << num1 << " y " << num2 << endl;

    return 0;
}
