//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
/*Escribe un programa que solicita al usuario de una tienda el número
de camisas y pantalones que vende con el costo respectivo.
Los productos vendidos, el total de la venta, el impuesto de ventas
correspondientes y el total mas impuesto sobre ventas.
Por ejemplo, si vende 3 pantalones a 350.00 pesos y 2 camisa a 4000, la salida debe ser:

        3 pantalones            1050.00
        2 camisas                850.00
        Total                   1850.00
        Impuesto sobre ventas    277.50
        Total mas impuesto   L. 2127.50
Notas: Investigue como se alinean las columnas y se redondean los valores numéricos*/
#include<iostream>
#include<locale.h>
#include<iomanip>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	//variables
	int nCamisas, nPantalones;
	float precioCamisas, precioPantalones, subTotal, IVA, Total;

	cout<< "Ingrese la cantidad de camisas: ";
	cin>>nCamisas;
	cout<< "Precio de camisas: ";
	cin>>precioCamisas;

	cout<< "Ingrese la cantidad de pantalones: ";
	cin>>nPantalones;
	cout<< "Precio de pantalones: ";
	cin>>precioPantalones;
	//proceso
	subTotal = (nCamisas*precioCamisas) + (nPantalones*precioPantalones);
	IVA = subTotal * 0.15;//15%
	Total = subTotal + IVA;
	cout<< "\n******** Resultados ********"<<endl;
	cout<<setw(15)<<nPantalones<<setw(13)<< " Pantalones  "<<setw(17)<<fixed<<setprecision(2)<<nPantalones*precioPantalones<<endl;
    cout<<setw(15)<<nCamisas<<setw(13)<< " Camisas  "<<setw(17)<<fixed<<setprecision(2)<<nCamisas*precioCamisas<<endl;
    cout<<setw(28)<<" Total  "<<setw(17)<<fixed<<setprecision(2)<<subTotal<<endl;
    cout<<setw(25)<< "Impuesto sobre Ventas L. "<<setw(20)<<fixed<<setprecision(2)<<IVA<<endl;
    cout<<setw(25)<< "Total mas Impuesto L. "<<setw(20)<<fixed<<setprecision(2)<<Total;

	return 0;
}
