//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
/*Escriba un programa que solicite un número al usuario y que
de como salida si el número es par o impar*/
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
    setlocale(LC_CTYPE, "Spanish");
    //variable
	int numero;
	cout<< "Ingresa un número: ";
	cin>>numero;
	//proceso
	if(numero % 2 == 0){
        cout<< "\n\n El múmero es par ";
	}else{
        cout<< "\n\n El múmero es impar ";
	}
	return 0;
}
