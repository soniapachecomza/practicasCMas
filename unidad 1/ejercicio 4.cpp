//Nombre:
//TP N�:
//EJ N�:4
//Comentarios:Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avi�n
// y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupaci�n y el porcentaje
// de no ocupaci�n del mismo.Ejemplo si el avi�n tiene 200 asientos disponibles y se vendieron 80 pasajes,
// el porcentaje de ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.


#include<iostream>
using namespace std;

int main(void){
   int asientos_disponibles;
   int pasajes_ocupados;
   int porcentaje_ocupacion;
   int porcentaje_no_ocupacion;

   cout << "Ingrese la cantidad de asientos disponibles: ";
   cin >> asientos_disponibles;

   cout << "Ingrese la cantidad de pasajes ocupados: ";
   cin >> pasajes_ocupados;

   porcentaje_ocupacion = (pasajes_ocupados) / asientos_disponibles;
   porcentaje_no_ocupacion = 100 - porcentaje_ocupacion;

   cout << "El porcentaje de ocupaci�n es " << porcentaje_ocupacion << "% y el porcentaje de no ocupaci�n es " << porcentaje_no_ocupacion << "%" << endl;

   return 0;

}
