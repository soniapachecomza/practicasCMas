//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna: debe hacer un programa que simule tres operaciones de un cajero autom�tico.
//Debe solicitar el importe (negativo para extracci�n, positivo para deposito).
//El programa debe informar:
//      A- Si hubo un deposito mayor a $50000
//      B- La cantidad de dep�sitos realizados
//      C- El total de dinero operados

// Conceptos
//---------------------
//  Bandera: Me permite determinar si ocurrio o no una situaci�n
//  Acumular: Numerico. Sobre el valor actual acumula/ decrementa un valor N
//  Contador: Numerico. Sobre el valor actual acumula/decrementa 1

#include <iostream>
using namespace std;

int main() {
    // Declarar variables
    double importe; // Importe de la operaci�n
    int depositos = 0; // Contador de dep�sitos
    bool depositoMayor = false; // Bandera para indicar si hubo un dep�sito mayor a 50000
    double total = 0; // Acumulador del total de dinero operado
    // Repetir tres veces
    for (int i = 0; i < 3; i++) {
        // Solicitar el importe
        cout << "Ingrese el importe de la operaci�n (negativo para extracci�n, positivo para dep�sito): ";
        cin >> importe;
        // Verificar si es un dep�sito
        if (importe > 0) {
            // Incrementar el contador de dep�sitos
            depositos++;
            // Verificar si es mayor a 50000
            if (importe > 50000) {
                // Activar la bandera de dep�sito mayor
                depositoMayor = true;
            }
        }
        // Sumar el importe al total
        total += importe;
    }
    // Informar los resultados
    cout << "El resultado de las operaciones es:" << endl;
    // Informar si hubo un dep�sito mayor a 50000
    if (depositoMayor) {
        cout << "A- Hubo un dep�sito mayor a $50000." << endl;
    } else {
        cout << "A- No hubo un dep�sito mayor a $50000." << endl;
    }
    // Informar la cantidad de dep�sitos realizados
    cout << "B- La cantidad de dep�sitos realizados fue de " << depositos << "." << endl;
    // Informar el total de dinero operado
    cout << "C- El total de dinero operado fue de $" << total << "." << endl;
    return 0;
}
