//Nombre:Sonia Pacheco
//TP N�:1
//EJ N�:16
//Comentarios:Hacer un programa para ingresar una letra en may�sculas en una variable
// de tipo char y mostrar cu�ntas letras de diferencia hay en el alfabeto con respecto a la 'A'.

//Ejemplo:
//Si el usuario ingresa la letra C. Hay dos letras de diferencia con respecto a la A.

//Recomendaci�n:
//Tratar de no googlear la soluci�n. Si no sale, dejarlo decantar y probar muchas variantes.

#include<iostream>
using namespace std;

int main(void){
	char letra;
	int diferencia;

	cout << "Ingrese una letra en mayuscula: ";
	cin>> letra;

	diferencia=letra - 'A';

	cout << "Hay "<<diferencia<< " letras de diferencia con respecto a la A"<<endl;
	return 0;
}
