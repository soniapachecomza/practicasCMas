//Nombre:Sonia Pacheco
//TP N�:
//Actividad:
//Comentarios:
/*Escriba un programa que solicite 2 n�meros a un usuario y
el programa envia como salida cual es el mayor*/
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
    setlocale(LC_CTYPE, "Spanish");
	//variable
	int n1, n2;
	cout<< "Ingrese el primer n�mero: ";
	cin>>n1;

	cout<< "Ingrese el segundo n�mero: ";
	cin>>n2;
    if(n1 == n2){
        cout<< "Los n�meros son iguales";
    }else{
    	if(n1 > n2){
        cout<< "El n�mero mayor es: "<<n1<<endl;
        }else{
        cout<< "El n�mero mayor es: "<<n2<<endl;
        }
    }

	return 0;
}
