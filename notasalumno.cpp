//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
/*Escribe un programa que solicita a un maestro las cuatro notas del
estudiante. El programa envia a la pantalla las cuatro notas, el promedio y el mensaje de Aprobado o reprobado.
Por ejemplo, si se ingresan las calificaciones 45, 67,75 y 77, entonces
la salid debe ser: 66 Aprobado
Nota: Aprobado corresponde cuando el promedio es mayor o igual a 65%;*/
#include<iostream>
using namespace std;

int main(){
    //variables
	float n1, n2, n3, n4, promedio;
	cout<< "Ingresa el valor de nota 1: ";
	cin>>n1;
	cout<< "Ingresa el valor de nota 2: ";
	cin>>n2;
	cout<< "Ingresa el valor de nota 3: ";
	cin>>n3;
	cout<< "Ingresa el valor de nota 4: ";
	cin>>n4;

	//proceso
	promedio = (n1 + n2 + n3+ n4)/4;

	if(promedio >= 65){
        cout<< "El promedio es: "<<promedio<<"% Aprobado ";
	}else{
        cout<< "El promedio es: "<<promedio<<"% Desaprobado ";
	}
	return 0;
}
