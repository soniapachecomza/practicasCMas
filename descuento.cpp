//Nombre:Sonia Pacheco
//TP N�:
//Actividad:
//Comentarios:
/*Un centro comercial, por la compra de $ 800.00 en adelante proporciona
un descuento del 7% en caso contrario del 4%.
Escribe un programa que recibo de entrada nombre y n�mero de art�culos y costo por unidad
La informaci�n que se debe enviar al monitor una vez hecho el proceso es:
N�mero de art�culos, nombre del art�culos, costo total, descuento, total a pagar y el mensaje de
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

	 cout<< "Nombre del Art�culo: ";
	 getline(cin,nombreA);
	 cout<< "Cantidad por Art�culos: ";
	 cin>>numeroA;
	 cout<< "Costo por unidad: ";
	 cin>>precioU;

        costoTotal = precioU * numeroA;
    if(costoTotal >= 800){
        descuento = costoTotal * 0.07;
        Total = costoTotal - descuento;
        cout<< "\n ------ Resultado ------ "<<endl;
        cout<< "N�mero de art�culos: "<<numeroA;
        cout<< "\n Nombre de Art�culos: "<<nombreA;
        cout<< "\n Costo total: "<<costoTotal;
        cout<< "\n Descuento: "<<descuento;
        cout<< "\n Total a Pagar: "<<Total;
        cout<< "\n **** GRACIAS **** ";
    }else{
        descuento = costoTotal * 0.04;
        Total = costoTotal - descuento;
        cout<< "\n ------ Resultado ------ "<<endl;
        cout<< "N�mero de art�culos: "<<numeroA;
        cout<< "\n Nombre de Art�culos: "<<nombreA;
        cout<< "\n Costo total: "<<costoTotal;
        cout<< "\n Descuento: "<<descuento;
        cout<< "\n Total a Pagar: "<<Total;

    }
	return 0;
}
