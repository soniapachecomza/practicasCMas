//Nombre:Sonia
//TP N°:3
//EJ N°:10
//Comentarios:Dada una lista de 7 números informar cual es el primer y segundo número impar ingresado.
//Ejemplo: 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.

#include<iostream>
using namespace std;

int main() {
    int nums[7];
    int num_impares[2] = {0, 0};
    int count_impares = 0;

    for (int i = 0; i < 7; i++) {
        cout << "Ingrese un numero: ";
        cin >> nums[i];

        if (nums[i] % 2 != 0) {
            if (count_impares == 0) {
                num_impares[0] = nums[i];
                count_impares++;
            } else if (count_impares == 1) {
                num_impares[1] = nums[i];
                count_impares++;
                break;
            }
        }
    }

    if (count_impares == 0) {
        cout << "No se ingresaron numeros impares." << endl;
    } else if (count_impares == 1) {
        cout << "Solo se ingreso un numero impar: " << num_impares[0] << endl;
    } else {
        cout << "El primer numero impar ingresado es: " << num_impares[0] << endl;
        cout << "El segundo numero impar ingresado es: " << num_impares[1] << endl;
    }
	return 0;
}
