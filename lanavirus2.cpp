//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:Para considerarse de riego para Lanavirus es necesario tener edad mayor a 80 o estar inmunosuprimido
#include<iostream>
using namespace std;

int main(){
	int edad;
	char inm;

    cout << "Ingrese edad: ";
    cin >> edad;

    cout << "Inmunosuprimido (S/N): ";
    cin >> inm;

	if (edad > 80 || inm == 'S'){
        cout << "Es grupo de Riego de Lanavirus" << endl;
	}
	else{
        cout << "No es grupo de riesgo de Lanavirus" << endl;
	}
	return 0;
}
