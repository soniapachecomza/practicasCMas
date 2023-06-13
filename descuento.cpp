//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
/*Un centro comercial, por la compra de $ 800.00 en adelante proporciona
un descuento del 7% en caso contrario del 4%.
Escribe un programa que recibo de entrada nombre y número de artículos y costo por unidad
La información que se debe enviar al monitor una vez hecho el proceso es:
Número de artículos, nombre del artículos, costo total, descuento, total a pagar y el mensaje de
"Gracias" si el descuento es de 7%*/
#include<iostream>
#include<locale.h>
#include<iomanip>
using namespace std;

int main(){
	 setlocale(LC_CTYPE, "Spanish");
	 //variable
	 string nombreA;
	 int numeroA;
	 float precioU, descuento,costoTotal, Total;

	 cout<< "Nombre del Artículo: ";
	 getline(cin,nombreA);
	 cout<< "Cantidad por Artículos: ";
	 cin>>numeroA;
	 cout<< "Costo por unidad: ";
	 cin>>precioU;

        costoTotal = precioU * numeroA;
    if(costoTotal >= 800){
        descuento = costoTotal * 0.07;
        Total = costoTotal - descuento;
        cout<< "\n ------ Resultado ------ "<<endl;
        cout<< "Número de artículos: "<<numeroA;
        cout<< "\n Nombre de Artículos: "<<nombreA;
        cout<< "\n Costo total: "<<costoTotal;
        cout<< "\n Descuento: "<<descuento;
        cout<< "\n Total a Pagar: "<<Total;
        cout<< "\n **** GRACIAS **** ";
    }else{
        descuento = costoTotal * 0.04;
        Total = costoTotal - descuento;
        cout<< "\n ------ Resultado ------ "<<endl;
        cout<< "Número de artículos: "<<numeroA;
        cout<< "\n Nombre de Artículos: "<<nombreA;
        cout<< "\n Costo total: "<<costoTotal;
        cout<< "\n Descuento: "<<descuento;
        cout<< "\n Total a Pagar: "<<Total;

    }
	return 0;
}
