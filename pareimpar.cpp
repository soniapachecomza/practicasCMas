//Nombre:Sonia Pacheco
//TP N�:
//Actividad:
//Comentarios:
/*Escriba un programa que solicite un n�mero al usuario y que
de como salida si el n�mero es par o impar*/
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
    setlocale(LC_CTYPE, "Spanish");
    //variable
	int numero;
	cout<< "Ingresa un n�mero: ";
	cin>>numero;
	//proceso
	if(numero % 2 == 0){
        cout<< "\n\n El m�mero es par ";
	}else{
        cout<< "\n\n El m�mero es impar ";
	}
	return 0;
}
