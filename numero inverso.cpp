//Nombre:Sonia Pacheco
//TP N�:
//Actividad:
//Comentarios:
/* Escribe un prgrama que solicite al usuario un m�mero de
3 d�gitos y que lo imprima en orden inverso.
Por ejemplo:
    Una entrada de 592 debe enviar como salida 295
*/
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
    int numero, ud, dec, cent;

    cout<< "Ingrese un n�mero de 3 digitos: ";
    cin>>numero;

        ud = (numero % 100) % 10;
        dec = (numero % 100) / 10;
        cent = numero / 100;
    cout<< "\n =  "<<ud<<dec<<cent;
	return 0;
}
