//Nombre:Sonia Pacheco
//TP N°:1
//EJ N°:14
//Comentarios:Hacer un programa para ingresar el importe de una compra y el descuento a aplicar.
//Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.

//Ejemplo:
//Importe  : 4500 ↲
//Descuento: 40 ↲
//Importe    : $ 4500
//Descuento  : $ 1800
//Total      : $ 2700

#include<iostream>
using namespace std;

int main(void){
    float importe, descuento, importe_total;

    cout << "Ingrese el importe de la compra: $";
    cin >> importe;
    cout << "Ingrese el descuento a aplicar: ";
    cin >> descuento;

    float monto_descuento = (importe * descuento) / 100;
    importe_total = importe - monto_descuento;

    cout << "Importe:$ " << importe << endl;
    cout << "Descuento:$ " << monto_descuento << endl;
    cout << "===================================================================================";

    cout << "Total: $" << importe_total << endl;
    return 0;
}
