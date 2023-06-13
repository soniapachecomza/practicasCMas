//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
/*Escribe un programa que solicite pie y le envie a pantalla su equivalencia en pulgadas, yardas, metros y centimetros*/
#include<iostream>
using namespace std;

int main(){
	//variables
	float nPies, pulgadas, yardas, metros, centimetros;
	cout<< "Ingrese la cantidad de pies: ";
	cin>>nPies;

	//proceso
	pulgadas = nPies * 12;
	yardas = nPies / 3;
	metros = nPies / 3.281;
	centimetros = nPies * 30.48;

	//salidas
	cout<< "n\** Resultados **"<<endl;
	cout<< " Pulgadas       = "<<pulgadas<<endl;
	cout<< " Yardas         = "<<yardas<<endl;
	cout<< " Metros         = "<<metros<<endl;
	cout<< " Centimetros    = "<<centimetros<<endl;
	return 0;
}
