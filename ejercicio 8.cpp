//Nombre:
//TP N°:
//EJ N°:
//Comentarios:Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
//El legajo del empleado con mayor sueldo

#include<iostream>
using namespace std;

int main() {
    int legajo[10];
    double sueldo[10];
    int max_index = -1;
    double sueldo_max = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el legajo del empleado " << i+1 << ": ";
        cin >> legajo[i];
        cout << "Ingrese el sueldo del empleado " << i+1 << ": ";
        cin >> sueldo[i];

        if (sueldo[i] > sueldo_max) {
            sueldo_max = sueldo[i];
            max_index = i;
        }
    }

    cout << "El legajo del empleado con el mayor sueldo es: " << legajo[max_index] << endl;
	return 0;
}
