//Nombre:Sonia Pacheco
//Legajo: 26047
//Evaluación:parcial 1
//Comentarios:
#include<iostream>
using namespace std;

int main(void)
{
    int legajo;
    char turno;
    char horario;
    int hsTrabajadas;
    int totalHs= 0;
    int cantNoche= 0;
    int cantTarde= 0;
    int cantMañana= 0;
    int hsMañana = 0;
    int hsTarde= 0;
    int hsNoche = 0;
    float promHsNoche = 0;
    int total_horas_extras = 0;
    bool Tmañana = false, Ttarde = false, Tnoche = false;
    int hsMenos = 99999;
    char horarioMenos;

    cout << "Ingresar el legajo del enfermero/a: ";
    cin >> legajo;

    while (legajo >=0){
    totalHs = 0;
    while (true){
            cout << "Ingrese el numero de turno (0 para salir): ";
            cin >> turno;

            if (turno == 0){
                break;
            }
            cout << "Ingrese el horario (M - Mañana, T - Tarde, N - Noche): ";
            char horario;
            cin >> horario;

            cout << "Ingrese la cantidad de horas trabajadas: ";
            cin >> hsTrabajadas;

            totalHs += hsTrabajadas;
        }
        if (horario == 'N'){
            promHsNoche += hsTrabajadas;
            cantNoche++;
        }
        else if (horario == 'M'){
            cantMañana++;
            hsMañana += hsTrabajadas;
        }
        else{
            cantTarde++;
            hsTarde += hsTrabajadas;
        }
        cout << "El promedio de horas trabajadas del enfermero/a del legajo numero:  " << legajo << " en el horario de la noche es: ";

        if (cantNoche > 0) {
            promHsNoche /= cantNoche;
            cout << promHsNoche << endl;
        }else {
            cout << "No se registraron horas en el turno de la noche" << endl;
        }
        promHsNoche = 0.0;

        cout << "Cantidad de enfermeros que trabajaron en los tres horarios: ";

        if (cantMañana > 0 && cantTarde > 0 && cantNochenoche > 0){
            cout << "Todos los enfermeros trabajaron en los tres horarios." << endl;
        } else {
            int cantidad = 0;

            if (cantMañana > 0){
                cantidad++;
            }

            if (cantTarde > 0){
                cantidad++;
            }

            if (cantNoche > 0){
                cantidad++;
            }

            cout << cantidad << " enfermeros trabajaron en al menos un turno en los tres horarios." << endl;
        }

        if (hsMañana < hsMenos){
            hsMenos = hsMañana;
            hsMenos = 'M';
        }

        if (hsTarde < hsMenos){
            hsMenos = hsTarde;
            horarioMenos = 'T';
        }

        if (hsNoche < hsMenos){
            hsMenos = hsNoche;
            horarioMenos = 'N';
        }

        cout << "El horario con menor cantidad de horas trabajadas es el horario de " << horarioMenos << " con " << hsMenos << " horas." << endl;


    return 0;
}
