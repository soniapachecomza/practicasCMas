//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	float nota, suma = 0, promedio;
	int i = 1;

	do{
        cout<< "Ingresa la nota: "<< i << ": ";
        cin>>nota;
        suma = suma + nota;
        i++;
	}while(i<=10);
	promedio = suma /10;
	cout<< "El promedio es: "<<promedio;
	return 0;
}
