//Nombre:
//TP N°:
//EJ N°:
//Comentarios:
#include<iostream>
using namespace std;

int main(void){
	int num;
	cin >> num;

	if(num == 0){
        cout << "Es cero";
	} else (num > 0){
        cout << "Es positivo";
	} else {
        cout << "Es negativo";
	}
	return 0;
}
