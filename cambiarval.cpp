//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;
void cambiarValor(int *parametro){
    *parametro = 20;
}
int main(){
	int argumento = 10;
	cout << "Antes llamar funcion: "<< argumento << endl;
	cambiarValor(&argumento );
	cout << "Despues llamar funcion: "<< argumento << endl;
	return 0;
}
