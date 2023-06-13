//Nombre:Sonia
//TP N°:3
//EJ N°:3
//Comentarios:Hacer un programa para que el usuario ingrese un número positivo
//y que luego se muestren por pantalla los números entre el 1 y el número ingresado
//por el usuario. Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.
#include<iostream>
#include<locale.h>
using namespace std;

int main() {
    int n;  // Variable para almacenar el número ingresado por el usuario
    cout << "Ingrese un numero positivo: ";
    cin >> n;

    // Validar que el número ingresado sea positivo
    if (n <= 0) {
        cout << "Error: el numero debe ser positivo." << endl;
        return 0;
    }

    // Imprimir los números entre 1 y n
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    cout << endl;
	return 0;
}
