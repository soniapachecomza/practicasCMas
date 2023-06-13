//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:Hacer un programa en C++ para una tienda de electrónica
//que tiene en promoción de descuento por ventas al mayor,
//el descuento dependerá del número de Teléfonos que se compren.
//Si son mas de diez, se les dará un 10% de descuento sobre el total de la compra.
//el el número de teléfonos es mayor del 20 pero menor del 30, se le otorgará un descuento20% de descuento y
//si son mas de treinta teléfonos se otorgará un 40% de descuento. El precio de cada teléfono es de $200;
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
    setlocale(LC_CTYPE, "Spanish");
	int cantidad;
	float precio = 0;

    cout<<"Ingrese los datos de compra"<<endl;
    cout<<"Teléfonos comprados: ";
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
