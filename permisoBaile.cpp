//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
using namespace std;

int main(){
	int edad = 0;

	cout << "Por favor ingresa tu edad: ";
	cin >> edad;

	if(edad < 18){
        cout << "NO puedes Ingresar al BOLICHE";
    	}else{
    	cout << "SI puede Ingresar al BOLICHE";
    	}
	return 0;
}
