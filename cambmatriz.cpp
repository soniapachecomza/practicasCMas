//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;
void cambiarValor(int *parametro){
    parametro[0] = 4;
    parametro[1] = 5;
    parametro[2] = 6;
}
int main(){
	int arg[] = {1, 2, 3};
	cout << "Valores antes del array: "
         << arg[0]<< ", "<< arg[1]<< ", "<< arg[2]<< endl;
	cambiarValor(arg);
	cout << "Valores despues del array: "
	 << arg[0]<< ", "<< arg[1]<< ", "<< arg[2]<< endl;
	return 0;
}
