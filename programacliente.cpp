//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna: un comercio solicita hacer un programa que
//que permita ingresar el nombre de un artículo, su
//precio unitario y la cantidad de unidades vendidas
//(entero)


//*además, el programa debe poder calcular e informar una serie de descuentos y recargos
//descuentos y encargos que dependen de la forma de Pago:

// -E -> Efectivo : Aplica un 15% de descuento al total de la compra
// -Q -> QR: Aplica un 5% de descuento al total de la compra
// -T -> Aplica un 10% de descuento al total de la compra

//La salida por pantalla debe mostrar el nombre del artículo,
//el subtotal de la compra, la forma de pago y el total de la compra
//(incluyendo el descuento o recargo aplicación si corresponde)
//*Si abono en efectivo, informar también el vuelto que debe otorgarle al cliente, si es que debe hacerlo.
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	//datos de entrada
	string nombreArt, formaPago;
	float precio, pago;
	int cantidad;
	char fp;

	cout << "Ingresar: " << endl;
	cout << "Nombre del articulo: ";
	cin >> nombreArt;
	cout << "Precio unitario: ";
	cin >> precio;
	cout << "Cantidad de unidades vendidas: ";
    cin >> cantidad;
    cout << "Forma de pago (E- Efectivo, Q- QR, T- Tarjeta): ";
    cin >> fp;

    if(fp == 'E'){
        cout << "Con cuanto abona: $";
        cin >> pago;
    }
    //variables auxiliares
	string formaPago;
	float subtotal, total, vuelto = 0;

	//Proceso
	subtotal = precio * cantidad;

	switch(fp){
    case 'E':
        formaPago = "Efectivo";
        total = subtotal * 0.85f;
        cout << "El total es de: $" << total << endl;
        cout << "Con cuanto abonar? ";
        vuelto = pago - total;
    break;
    case 'Q':
        formaPago = "QR";
        total = subtotal * 0.95f;
    break;
    case 'T':
        formaPago = "Tarjeta";
        total = subtotal * 1.1f;
    break;
	default:
        cout << "No se ha imgresado una forma de pago valido" << endl;
    break;
	}
	//Informacion de salida
	cout << endl;
	cout << "Nombre del articulo: " << nombreArt << endl;
	cout << "Subtotal; $" << subtotal << endl;
	cout << "Forma de pago: " << formaPago << endl;
	cout << "Total: $" << total << endl;

	if(vuelto > 0){
        cout << "Su vuelto es: " << fixed << setprecision(2) << vuelto << endl;
	}
	else if (vuelto < 0){
        cout << "Falta abonar: $" << fixed << setprecision(2) << vuelto * (-1) << endl;
	}
	return 0;
}
