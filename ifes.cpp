//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
		int minro;
	cout << "Ingresa un numero: ";
	cin >> minro;
	if(minro > 0){
        cout << "El valor es positivo "<< minro << endl;
	} else{
	    if(minro == 0){
          cout << "El valor es cero  "<< minro <<endl;
	    }else{
       cout << "El valor es negativo  "<< minro <<endl;
        }

	}
	return 0;
}
