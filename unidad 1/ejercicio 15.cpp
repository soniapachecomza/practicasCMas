//Nombre:Sonia Pacheco
//TP N°:1
//EJ N°:15
//Comentarios:La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura
// mínima en una zona y tiempo determinado. Dada la temperatura máxima y la temperatura mínima
// de San Fernando de ayer, calcular y mostrar la amplitud térmica.

//NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al de la temperatura mínima.

#include<iostream>
using namespace std;

int main(void){
	float tempMax, tempMin, amplitudTerm;

	cout << "Ingrese la temperatura maxima: ";
	cin>> tempMax;

	cout << "Ingrese la temperatura minima: ";
	cin>> tempMin;

	amplitudTerm= tempMax - tempMin;

	cout << "La amplitud termica es: "<<amplitudTerm<<endl;
	return 0;
}
