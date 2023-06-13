//Nombre:Sonia
//TP N°:2
//EJ N°:13
//Comentarios:Hacer un programa para ingresar por teclado la fecha de nacimiento
// de una persona, ingresando día, mes y año como 3 datos individuales. Luego
// ingresar la fecha actual ingresando día, mes y año como 3 datos individuales.
//Calcular luego la edad en años de esa persona y listarlo por pantalla.
#include<iostream>
using namespace std;

int main() {
    int diaNac, mesNac, anioNac, diaAct, mesAct, anioAct, edad;

    cout << "Ingrese el dia de nacimiento: ";
    cin >> diaNac;

    cout << "Ingrese el mes de nacimiento: ";
    cin >> mesNac;

    cout << "Ingrese el anio de nacimiento: ";
    cin >> anioNac;

    cout << "Ingrese el dia actual: ";
    cin >> diaAct;

    cout << "Ingrese el mes actual: ";
    cin >> mesAct;

    cout << "Ingrese el anio actual: ";
    cin >> anioAct;

    edad = anioAct - anioNac;

    if (mesAct < mesNac) {
        edad--;
    } else if (mesAct == mesNac && diaAct < diaNac) {
        edad--;
    }

    cout << "La edad es: " << edad << " años.";
	return 0;
}
