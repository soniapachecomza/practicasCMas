//Nombre:Sonia
//TP N°:2
//EJ N°:5
//Comentarios:Un negocio de perfumería efectúa descuentos según el importe de
// la venta. - Si el importe es menor a $100 aplicar un descuento del 5% - Si
//el importe es entre $100 y hasta $500 aplicar un descuento del 10% - Si el importe
// es mayor a $500 aplicar un descuento del 15% Hacer un programa donde se ingresa el
//importe original sin descuento y que se informe por pantalla el importe con el descuento ya aplicado.
#include<iostream>
using namespace std;

int main(void){
	float importe, descuento, total;

	cout << "Ingrese el importe sin descuento: ";
	cin >> importe;

	if (importe <100){
        descuento=importe*0.05;
	} else if(importe>=100&&importe<=500){
        descuento=importe*0.10;
	} else{
        descuento=importe*0.15;
	}
	total=importe -descuento;
	cout << "El importe con descuento es: "<<total<<endl;
	return 0;
}
