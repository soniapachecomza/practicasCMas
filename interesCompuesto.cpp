//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include <iostream>
#include <cmath>
#include <clocale>

int main() {
    std::setlocale(LC_CTYPE, "Spanish");

    double Ci = 0.0;
    double Ti = 0.0;
    int t = 0;
    double resultado = 0.0;

    while (Ci <= 0) {
        std::cout << "Ingrese el Capital Inicial: ";
        std::cin >> Ci;
    }

    while (Ti <= 0) {
        std::cout << "Ingrese la Tasa de Interes anual: ";
        std::cin >> Ti;
    }

    while (t <= 0) {
        std::cout << "Ingrese el tiempo en años: ";
        std::cin >> t;
    }

    resultado = Ci * std::pow((1 + (Ti / 100)), t);

    std::cout << "El dinero que se generó al final del tiempo de la inversión es: $" << resultado;

    return 0;
}
