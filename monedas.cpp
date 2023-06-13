//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
/*Escribe un programa que solicite al usuario
monedas de 5, 10 y 20 centavos tiene.
El programa debe enviar en pantalla el total de dolares
y centavos que suman las monedas.
Por ejemplo:
una entrada de 9 monedas de 5, 7 de 10 y 15 de 20,
la salida en pantalla debe ser:
entrada de 9 monedas de 5,7 dieces y 15 veinte son $ 4.15.
*/
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	//variables
	int m05, m10, m20;
	float tm05, tm10, tm20, total;

	cout<<"Ingresar cantidad de monedas de  .05: $  ";
	cin>>m05;

	cout<<"Ingresar cantidad de monedas de  .10: $  ";
	cin>>m10;

	cout<<"Ingresar cantidad de monedas de  .20: $  ";
	cin>>m20;

	//proceso
	tm05 = m05 * 0.05;
	tm10 = m10 * 0.10;
	tm20 = m20 * 0.20;
	total = m05 + m10 + m20;

	cout<<"\n"<<m05<<" de cincos ,"<<m10<<" de diez y "<<m20<<" de veinte son: $ "<<total;
	return 0;
}
