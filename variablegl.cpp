//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;
int variableGlobal = 5;
int a = 10;
void cambio(int variableLocalFuncion){
variableLocalFuncion = 40;

int a = 50;
int b = 60;

variableGlobal = 70;
cout << "Variable local (funcion): "<< variableLocalFuncion<< endl;
cout << "Variable a local (funcion): "<< a<<endl;
}
int main(){

	return 0;
}
