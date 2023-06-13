//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
/*Escribe un programa que convierte grados Fahrenheit a
grados celsios
*/
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");

	float gf, gc;
	cout<< "Ingrese grados Fahrenheit: ";
	cin>>gf;
        gc = (gf - 32)* 5/9;
    cout<< "n\ Total grados Centigrados "<<gc;

	return 0;
}
