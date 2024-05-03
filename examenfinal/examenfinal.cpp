//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:Una heladeria dispone de las compras realizadas por sus clientes en los últimos meses.
//Por cada venta realizada registro:
//  -número de venta(entero).
//  -numero de cliente(entero ente 100 y 150).
//  -número de sucursal(entero entre 1 y 6).
//  -numero de sabor de helado(entero).
//  -peso en gramos(float), horario(entero).
// No se sabe la cantidad de registros de ventas totales.
//El fin de la carga de datos se ingresa con un numero de ventas igual a 999.
// Para cada punto se pide calcular e informar:
//       1) Por cada sucursal, el nombre de la misma y la cantidad total de helado vendido.
//       2) la cantidad de clientes que pidieron chocolate pero no frutilla.
//       3) Los numeros de clientes que tuvieron envio gratis mas de una vez en por lo menos una sucursal.
// Resolverlo haciendo uso de una funcion auxiliar llamada tieneEnvioGratis que reciba la sucursal y
//el horario de la compra y devuelve true o false segun corresponda.
//      4) los nombres de los gustos de helado que hayan vendido en total mas de 15 kilos.
#include<iostream>
#include<locale>
using namespace std;

const int MaxSabores = 8;

bool tieneEnvioGratis(int sucursal, int horario) {
    if ((sucursal == 1 && horario >= 12 && horario <= 15) ||
        (sucursal == 2 && horario >= 16 && horario <= 18) ||
        (sucursal == 4 && horario >= 20 && horario <= 22) ||
        (sucursal == 5 && horario >= 14 && horario <= 17) ||
        (sucursal == 6 && horario >= 14 && horario <= 16)) {
        return true;
    }
    return false;
}

int main() {
    setlocale(LC_ALL, "");

    int nroVentas, nroCliente, nroSucursal, nroSabor, horario;
    float pesoGramos;
    string nombreSucursal, nombresSabores[MaxSabores] = {"chocolate", "atun", "mate cocido", "jengibre granizado", "frutilla", "cafe con roquefort", "pochoclo", "ensalada mixta"};

    int ventasxSucursal[6] = {0};
    int clientesChocolateSinFrutilla = 0;
    bool clientesEnvioGratis[1000] = {false};
    bool saboresMas15Kilos[MaxSabores] = {false};

    while (true) {
        cout << "Ingrese número de venta: ";
        cin >> nroVentas;
        if (nroVentas == 999) {
            break;
        }

        cout << "Número de cliente: ";
        cin >> nroCliente;

        cout << "Número de sucursal: ";
        cin >> nroSucursal;

        cout << "Número de sabor de helado: ";
        cin >> nroSabor;

        cout << "Peso en gramos: ";
        cin >> pesoGramos;

        cout << "Horario: ";
        cin >> horario;

        ventasxSucursal[nroSucursal - 1] += pesoGramos;

        if (nroSabor == 100 && nroSabor != 500) {
            clientesChocolateSinFrutilla++;
        }

        int codigoClienteSucursal = nroCliente * 10 + nroSucursal;

        if (tieneEnvioGratis(nroSucursal, horario)) {
            clientesEnvioGratis[codigoClienteSucursal] = true;
        } else {
            clientesEnvioGratis[codigoClienteSucursal] = false;
        }

        if (ventasxSucursal[nroSabor - 1] > 15000 && nroSabor >= 0 && nroSabor < MaxSabores) {
            saboresMas15Kilos[nroSabor - 1] = true;
        }
    }

    cout << "\n1) Ventas por sucursal:\n";
    for (int i = 0; i < 6; i++) {
        string nombreSucursal;
        switch (i + 1) {
            case 1:
                nombreSucursal = "Pacheco";
                break;
            case 2:
                nombreSucursal = "Tigre 1";
                break;
            case 3:
                nombreSucursal = "San Fernando";
                break;
            case 4:
                nombreSucursal = "Tigre II";
                break;
            case 5:
                nombreSucursal = "Garin";
                break;
            case 6:
                nombreSucursal = "Don Torcuato";
                break;
            default:
                nombreSucursal = "Sucursal Desconocida";
                break;
        }
        cout << nombreSucursal << ": " << ventasxSucursal[i] << " gramos" << endl;
    }

    cout << "\n2) Clientes que pidieron chocolate pero no frutilla: " << clientesChocolateSinFrutilla << endl;

    cout << "\n3) Números de clientes con envío gratis más de una vez en al menos una sucursal:\n";
    for (int i = 0; i < 1000; i++) {
        if (clientesEnvioGratis[i]) {
            cout << i / 10 << endl;
        }
    }

    cout << "\n4) Sabores con más de 15 kilos vendidos:\n";
    for (int i = 0; i < MaxSabores; i++) {
        if (saboresMas15Kilos[i]) {
            cout << nombresSabores[i] << endl;
        }
    }

    return 0;
}
