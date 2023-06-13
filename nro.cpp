//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	int maximo = 5, acumuladorSuma = 0;
	for (int nro = 1; nro <= maximo; nro++){
        cout << "(acumuladorSuma + nro) ->  "<< acumuladorSuma<< " + " << nro<< endl;
        acumuladorSuma += nro;

	}
	cout << "La suma de los primeros 5 numeros es: "<< acumuladorSuma <<endl;
	return 0;
}
