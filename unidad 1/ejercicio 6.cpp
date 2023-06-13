//Nombre:
//TP N°:
//EJ N°:
//Comentarios:Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una
// de las cuatro semanas del mes. El programa debe listar la recaudación promedio por semana y el porcentaje de
// recaudación por semana.Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio
// $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.

#include<iostream>
using namespace std;

int main() {
    float semana1, semana2, semana3, semana4, promedio, porc1, porc2, porc3, porc4, total_recaudado;

    cout << "Ingrese la recaudación de la semana 1: $ ";
    cin >> semana1;
    cout << "Ingrese la recaudación de la semana 2: $ ";
    cin >> semana2;
    cout << "Ingrese la recaudación de la semana 3: $ ";
    cin >> semana3;
    cout << "Ingrese la recaudación de la semana 4: $ ";
    cin >> semana4;

    total_recaudado = semana1 + semana2 + semana3 + semana4;
    promedio = total_recaudado / 4;

    porc1 = semana1 / total_recaudado * 100;
    porc2 = semana2 / total_recaudado * 100;
    porc3 = semana3 / total_recaudado * 100;
    porc4 = semana4 / total_recaudado * 100;

    cout << "El promedio de recaudación por semana es: $" << promedio << endl;
    cout << "El porcentaje de recaudación de la semana 1 es de: " << porc1 << "%" << endl;
    cout << "El porcentaje de recaudación de la semana 2 es de: " << porc2 << "%" << endl;
    cout << "El porcentaje de recaudación de la semana 3 es de: " << porc3 << "%" << endl;
    cout << "El porcentaje de recaudación de la semana 4 es de: " << porc4 << "%" << endl;
	return 0;
}
