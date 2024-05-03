//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
using namespace std;

int main(){
	int horas;
	cout << "Por favor, ingresa cuantas horas trabajaste: ";
	cin >> horas;

	if(horas < 5){
        cout << "Tu ganancia es de $10";
	} else if(horas > 5 && horas < 11){
	    cout<< "Tu ganancia es de $ 20";
	}else {
        cout << "Tu ganancia es de $ 30";
	}
	return 0;
}
