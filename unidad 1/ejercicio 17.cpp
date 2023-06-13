//Nombre:Sonia Pacheco
//TP N�:1
//EJ N�:17
//Comentarios:El Laboratorio Gonzalez&Velez hace frascos de p�ldoras para aprender a programar.
// Cada frasco contiene 75 p�ldoras y cada p�ldora contiene 45mg de Briancetamol, 2grs de Pintoxicilina
// y 7mg de �cido Simon�tico.
//Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad
//de miligramos de Briancetamol, Pintoxicilina y de �cido Simon�tico que son necesarios para elaborarlos.

#include<iostream>
using namespace std;

int main(void){
	int cantidadFrascos;
	int cantidadPildoras;
	float cantidadBriancetamol;
	float cantidadPintoxicilina;
	float cantidadAcido;

	cout << "Ingrese la cantidad de frascos del pedido: ";
	cin>> cantidadFrascos;

	cantidadPildoras = cantidadFrascos * 75;
	cantidadBriancetamol = cantidadPildoras * 45/1000.0;
	cantidadPintoxicilina = cantidadPildoras * 2000/1000.0;
	cantidadAcido = cantidadPildoras * 7/1000.0;

	cout << "Para elaborar " << cantidadFrascos << " frascos, se necesitan:" << endl;
    cout << cantidadBriancetamol << " miligramos de Briancetamol." << endl;
    cout << cantidadPintoxicilina << " gramos de Pintoxicilina." << endl;
    cout << cantidadAcido << " miligramos de Acido Simonitico." << endl;
	return 0;
}
