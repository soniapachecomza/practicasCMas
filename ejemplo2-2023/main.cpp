//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna: debe hacer un programa que simule tres operaciones de un cajero automático.
//Debe solicitar el importe (negativo para extracción, positivo para deposito).
//El programa debe informar:
//      A- Si hubo un deposito mayor a $50000
//      B- La cantidad de depósitos realizados
//      C- El total de dinero operados

// Conceptos
//---------------------
//  Bandera: Me permite determinar si ocurrio o no una situación
//  Acumular: Numerico. Sobre el valor actual acumula/ decrementa un valor N
//  Contador: Numerico. Sobre el valor actual acumula/decrementa 1

#include <iostream>
using namespace std;

int main() {
    // Declarar variables
    double importe; // Importe de la operación
    int depositos = 0; // Contador de depósitos
    bool depositoMayor = false; // Bandera para indicar si hubo un depósito mayor a 50000
    double total = 0; // Acumulador del total de dinero operado
    // Repetir tres veces
    for (int i = 0; i < 3; i++) {
        // Solicitar el importe
        cout << "Ingrese el importe de la operación (negativo para extracción, positivo para depósito): ";
        cin >> importe;
        // Verificar si es un depósito
        if (importe > 0) {
            // Incrementar el contador de depósitos
            depositos++;
            // Verificar si es mayor a 50000
            if (importe > 50000) {
                // Activar la bandera de depósito mayor
                depositoMayor = true;
            }
        }
        // Sumar el importe al total
        total += importe;
    }
    // Informar los resultados
    cout << "El resultado de las operaciones es:" << endl;
    // Informar si hubo un depósito mayor a 50000
    if (depositoMayor) {
        cout << "A- Hubo un depósito mayor a $50000." << endl;
    } else {
        cout << "A- No hubo un depósito mayor a $50000." << endl;
    }
    // Informar la cantidad de depósitos realizados
    cout << "B- La cantidad de depósitos realizados fue de " << depositos << "." << endl;
    // Informar el total de dinero operado
    cout << "C- El total de dinero operado fue de $" << total << "." << endl;
    return 0;
}
