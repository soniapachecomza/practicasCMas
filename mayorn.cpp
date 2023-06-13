//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	int num, n, mayor = 0;

	cout<< "Cuantos numeros ingresara: ";
	cin>>num;

	for(int i = 1; i <= num; i++){
        cout<< " Ingrese el numero: "<<i<< " : ";
        cin>>n;
        if(mayor < n){
            mayor = n;
        }
	}
	cout<< "El mayor de los "<<num<< " numeros leidos es: "<<mayor;
	return 0;
}
