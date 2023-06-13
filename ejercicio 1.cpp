//Nombre:Sonia
//TP N°:2
//EJ N°:evaluacion
//Comentarios:
#include<iostream>
using namespace std;

int main(void){
	char fp;
	cout << "Formas de pago: ";
	cin >> fp;

	switch(fp){
        case E:
            cout << "Efectivo";
         break;
         case F:
            cout << "Tarjeta";
         break;
	}
	return 0;
}
