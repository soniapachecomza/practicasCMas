//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
/*Escriba un programa que solicite 2 números a un usuario y
el programa envia como salida cual es el mayor*/
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
    setlocale(LC_CTYPE, "Spanish");
	//variable
	int n1, n2;
	cout<< "Ingrese el primer número: ";
	cin>>n1;

	cout<< "Ingrese el segundo número: ";
	cin>>n2;
    if(n1 == n2){
        cout<< "Los números son iguales";
    }else{
    	if(n1 > n2){
        cout<< "El número mayor es: "<<n1<<endl;
        }else{
        cout<< "El número mayor es: "<<n2<<endl;
        }
    }

	return 0;
}
