//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
using namespace std;

int main(){
	int n;
    int minimo, maximo;
    bool esPrimero = true;

	cout << "Ingresa N: ";
	cin >> n;

	for(int i=2; i<n; i++){
        if(n % i == 0){
            if(esPrimero){
                minimo = i;
                esPrimero = false;
            }

            maximo = i;
        }
	}
    cout << "Maximo Divisor: " << maximo<< endl;
	cout << "Minimo Divisor: " << minimo<< endl;

	return 0;
}
