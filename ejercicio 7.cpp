//Nombre:
//TP N°:
//EJ N°:
//Comentarios:Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
//El sueldo máximo.
//El sueldo mínimo.
//El sueldo promedio.
//Cantidad de sueldos mayores a $50000.

#include<iostream>
using namespace std;

int main() {
    double sueldo[10];
    double sueldo_max = 0, sueldo_min = __DBL_MAX__, sueldo_prom = 0;
    int count_sueldos_altos = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el sueldo del empleado " << i+1 << ": ";
        cin >> sueldo[i];

        if (sueldo[i] > sueldo_max) {
            sueldo_max = sueldo[i];
        }

        if (sueldo[i] < sueldo_min) {
            sueldo_min = sueldo[i];
        }

        if (sueldo[i] > 50000) {
            count_sueldos_altos++;
        }

        sueldo_prom += sueldo[i];
    }

    sueldo_prom /= 10;

    cout << "El sueldo maximo es: " << sueldo_max << endl;
    cout << "El sueldo minimo es: " << sueldo_min << endl;
    cout << "El sueldo promedio es: " << sueldo_prom << endl;
    cout << "La cantidad de sueldos mayores a $50000 es: " << count_sueldos_altos << endl;
	return 0;
}
