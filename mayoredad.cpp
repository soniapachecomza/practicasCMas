//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
    int edad;
    int edadAdulto = 18;
	cout << "Ingresa tu edad: ";
	cin >> edad;

	if(edad >= edadAdulto){
        cout << "La persona es MAYOR de  "<<edadAdulto <<endl;
	} else{
        cout << "La persona es MENOR de  "<< edadAdulto<<endl;
	}
	return 0;
}
