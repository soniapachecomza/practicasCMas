//Nombre:Sonia Pacheco
//TP N�:
//Actividad:
//Comentarios:Hacer un programa en C++ para una tienda de electr�nica
//que tiene en promoci�n de descuento por ventas al mayor,
//el descuento depender� del n�mero de Tel�fonos que se compren.
//Si son mas de diez, se les dar� un 10% de descuento sobre el total de la compra.
//el el n�mero de tel�fonos es mayor del 20 pero menor del 30, se le otorgar� un descuento20% de descuento y
//si son mas de treinta tel�fonos se otorgar� un 40% de descuento. El precio de cada tel�fono es de $200;
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
    setlocale(LC_CTYPE, "Spanish");
	int cantidad;
	float precio = 0;

    cout<<"Ingrese los datos de compra"<<endl;
    cout<<"Tel�fonos comprados: ";
    cin>>cantidad;
    precio=cantidad*200;

    if(cantidad < 10) {
        cout<<"El precio a pagar es de:$  "<<precio;
    }else if(cantidad < 20){
        cout<<"El precio a pagar es de:$  "<<precio - (precio * 0.10);
    }else if(cantidad < 30){
        cout<<"El precio a pagar es de:$  "<<precio - (precio * 0.20);
    }else{
        cout<<"El precio a pagar es de:$  "<<precio - (precio * 0.40);
    }
	return 0;
}
