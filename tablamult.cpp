//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	int ntabla;
	cout<< "Mostrar la tabla de multiplicar de: ";
	cin>>ntabla;

	for(int i= 1; i<=10; i++){
        cout<< i << " * "<<ntabla <<" = " << i * ntabla <<endl;
	}
	return 0;
}
