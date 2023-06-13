//Nombre:Sonia Pacheco
//TP N°:1
//EJ N°:7
//Comentarios:Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento
// aplicada a la misma y luego informar por pantalla el importa a pagar.Ejemplo 1. Si el importe de la venta es
// $ 1.200 y el descuento es el 15% entonces el total a pagar será de $ 1.020.Ejemplo 2. Si el importe de la venta
// es $ 800 y el descuento es el 0% entonces el total a pagar será de $ 800.

#include<iostream>
using namespace std;

int main(void){
	int importe_venta;
	float porc_descuento;
	float total_pagar;
	cout << "Ingrese el importe de la venta: $ ";
	cin >> importe_venta;

	cout << "Ingrese el porcentaje:   %";
	cin >> porc_descuento;

	total_pagar = importe_venta - (importe_venta*(porc_descuento/100));

	cout << "El importe a pagar es de: $ " << total_pagar << endl;

	return 0;
}
