//Nombre:
//TP N°:
//EJ N°:
//Comentarios:Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados,
// aclarando cual es el máximo y cual el que le sigue.
//Ejemplo: 10, 8, 12, 14, 3 el resultado será 14 y 12.
//Ejemplo: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
//Ejemplo: -4, -8, -12, -20, -2 el resultado será -2 y -4

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nums[5];

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese un numero: ";
        cin >> nums[i];
    }

    sort(nums, nums+5);

    cout << "El mayor valor ingresado es: " << nums[4] << endl;
    cout << "El segundo mayor valor ingresado es: " << nums[3] << endl;

    return 0;
}
