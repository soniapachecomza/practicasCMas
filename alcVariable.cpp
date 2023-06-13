//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;
int variableGlobal = 5;
int a = 10;
// met. cambio
void cambio(int variableLocalFuncion){
    variableLocalFuncion = 40;
    int a = 50;
    int b = 60;
    variableGlobal = 70;
    cout << "Variable local (funcion) = " << variableLocalFuncion << endl;
    cout << "Variable local a (funcion) = "<< a << endl;
    cout << "Variable local b (funcion) = "<< b<< endl;
}
int main(){
    //alcance variables
    //variable local
	int variableLocal = 20;
	cout << "Variable global a (ppal) = "<< a << endl;
	//modificar v. global
	a = 30;
	//funcion cambio
	cambio(variableLocal);
	cout << "Variable global (ppal) = "<< variableLocal<< endl;
	cout << "Variable global a (ppal) = "<< a << endl;
	cout << "Variable global (ppal) = "<< variableGlobal<< endl;
	return 0;
}
