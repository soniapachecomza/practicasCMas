//Nombre:
//TP N°:
//EJ N°:
//Comentarios:
#include<iostream>
using namespace std;

int main(void){
    float horas_trabajadas, pago_por_hora, sueldo;

    cout << "Ingrese cantidad de horas trabajadas: ";
    cin >> horas_trabajadas;

    cout << "Ingrese valor del pago por hora trabajada: ";
    cin >> pago_por_hora;

    sueldo = horas_trabajadas * pago_por_hora;

    cout << "El sueldo correspondiente es: $" << sueldo;

    return 0;
}
