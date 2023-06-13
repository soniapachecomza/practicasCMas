//Nombre:
//TP N�:
//EJ N�:
//Comentarios:Hacer un programa para ingresar una lista 10 n�meros e informar el m�ximo de
//los negativos y el m�nimo de los positivos. Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
//M�ximo Negativo: -3.
//M�nimo Positivo: 2.

#include<iostream>
using namespace std;

int main() {
    int nums[10];
    int max_neg = INT32_MIN, min_pos = INT32_MAX;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> nums[i];

        if (nums[i] < 0 && nums[i] > max_neg) {
            max_neg = nums[i];
        }

        if (nums[i] > 0 && nums[i] < min_pos) {
            min_pos = nums[i];
        }
    }

    if (max_neg == INT32_MIN) {
        cout << "No se ingresaron numeros negativos." << endl;
    } else {
        cout << "El maximo negativo es: " << max_neg << endl;
    }

    if (min_pos == INT32_MAX) {
        cout << "No se ingresaron numeros positivos." << endl;
    } else {
        cout << "El minimo positivo es: " << min_pos << endl;
    }
	return 0;
}
