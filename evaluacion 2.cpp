//Nombre:Sonia Pacheco
//Legajo: 26047
//Evaluación:
//Comentarios:
#include <iostream>
using namespace std;

int main() {
    int legajo, turno, horasTrabajadas, cantidad, totalHoras=0, cantidadNoche=0, cantidadMañana=0, cantidadTarde=0, horasMañana=0, horasTarde=0, horasNoche=0;
    float promNoche = 0.0;
    int totalHsExtras = 0;
    bool tiene_mañana = false, tiene_tarde = false, tiene_noche = false;
    int horas_menos;
    char horario_menos;

    cout << "Ingrese el legajo del enfermero: ";
    cin >> legajo;

    while (legajo >= 0) {
        totalHoras = 0;

        while (true) {
            cout << "Ingrese el numero de turno (0 para salir): ";
            cin >> turno;

            if (turno == 0) {
                break;
            }

            cout << "Ingrese el horario (M - Mañana, T - Tarde, N - Noche): ";
            char horario;
            cin >> horario;

            cout << "Ingrese la cantidad de horas trabajadas: ";
            cin >> horasTrabajadas;

            totalHoras += horasTrabajadas;

            if (horario == 'N') {
                promNoche += horasTrabajadas;
                contador_noche++;
            }
            else if (horario == 'M') {
                cantidadMañana++;
                horasMañana += horasTrabajadas;
            }
            else {
                cantidadTarde++;
                horasTarde += horasTrabajadas;
            }
        }

        cout << "El promedio de horas trabajadas de " << legajo << " en el horario de la noche es: ";

        if (cantidadNoche> 0) {
            promNoche /= contador_noche;
            cout << promNoche << endl;
        }
        else {
            cout << "No se registraron horas en el horario de la noche" << endl;
        }

        promNoche = 0.0;

        if (totalHoras > 8) {
            cout << "El enfermero " << legajo << " realizó " << totalHoras - 8 << " horas extras." << endl;
        }
        else {
            cout << "El enfermero " << legajo << " no realizó horas extras." << endl;
        }

       cout << "Cantidad de enfermeros que trabajaron en los tres horarios: ";

        if (cantidadMañana > 0 && cantidadTarde > 0 && cantidadNoche> 0) {
        cout << "Todos los enfermeros trabajaron en los tres horarios." << endl;
    } else {
        int cantidad = 0;
    }
        if (cantidadMañana > 0) {
        cantidad++;
    }

        if (cantidadTarde > 0) {
        cantidad++;
    }

        if (cantidadNoche> 0) {
        cantidad++;
    }

        cout << cantidad << " enfermeros trabajaron en al menos un turno en los 3 horarios." << endl;
}

        if (horasMañana < horas_menos) {
        horas_menos = horasMañana;
        horario_menos = 'M';
        }

        if (horasTarde < horas_menos) {
        horas_menos = horasTarde;
        horario_menos = 'T';
        }

        if (horasNoche < horas_menos) {
        horas_menos = horasNoche;
        horario_menos = 'N';
        }

        cout << "El horario con menor cantidad de horas trabajadas es el horario de " << horario_menos << " con " << horas_menos << " horas." << endl;

return 0;
}
