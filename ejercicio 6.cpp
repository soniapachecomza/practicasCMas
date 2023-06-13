//Nombre:
//TP N°:
//EJ N°:
//Comentarios:Hacer un programa para ingresar una lista de 10 números,
//luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.

#include<iostream>
using namespace std;

int main() {
    int numeros[10];
    int positivos = 0, negativos = 0, cero = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> numeros[i];

        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        } else {
            cero++;
        }
    }

    cout << "Numeros positivos: " << positivos << endl;
    cout << "Numeros negativos: " << negativos << endl;
    cout << "Numeros igual a cero: " << cero << endl;
	return 0;
}
