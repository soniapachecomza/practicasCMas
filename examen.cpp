//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

// Estructura para representar una venta
struct Venta {
    int numVenta;
    int numCliente;
    int numSucursal;
    int numSaborHelado;
    float pesoGramos;
    int horario;
};

// Función para verificar si un cliente tiene envío gratis más de una vez en una sucursal y horario específico
bool tieneEnvioGratis(int sucursal, int horario) {
    // Definir los horarios con envío gratis para cada sucursal
    map<int, pair<int, int>> horariosEnvioGratis = {
        {1, {12, 15}},
        {2, {16, 18}},
        {4, {20, 22}},
        {5, {14, 17}},
        {6, {14, 16}}
    };

    // Verificar si la sucursal tiene horarios con envío gratis y si el horario actual aplica
    auto it = horariosEnvioGratis.find(sucursal);
    if (it != horariosEnvioGratis.end()) {
        pair<int, int> horarioSucursal = it->second;
        if (horario >= horarioSucursal.first && horario <= horarioSucursal.second) {
            return true;
        }
    }
    return false;
}

int main() {
    map<int, string> nombresSabores = {
        {100, "chocolate"},
        {200, "atun"},
        {300, "mate cocido"},
        {400, "jengibre granizado"},
        {500, "frutilla"},
        {600, "cafe con roquefort"},
        {700, "pochoclo"},
        {800, "ensalada mixta: lechuga, tomate y cebolla"}
    };

    // Inicializar variables para almacenar los datos
    map<int, float> ventasPorSucursal;
    int clientesChocolateNoFrutilla = 0;
    map<int, bool> clientesEnvioGratis;
    vector<int> saboresMas15Kilos;

    // Lectura de datos de ventas
    while (true) {
        Venta venta;
        cout << "Ingrese número de venta: ";
        cin >> venta.numVenta;
        if (venta.numVenta == 999) {
            break;
        }

        cout << "Número de cliente: ";
        cin >> venta.numCliente;

        cout << "Número de sucursal: ";
        cin >> venta.numSucursal;

        cout << "Número de sabor de helado: ";
        cin >> venta.numSaborHelado;

        cout << "Peso en gramos: ";
        cin >> venta.pesoGramos;

        cout << "Horario: ";
        cin >> venta.horario;

        // Registrar venta por sucursal
        ventasPorSucursal[venta.numSucursal] += venta.pesoGramos;

        // Verificar clientes que pidieron chocolate pero no frutilla
        if (venta.numSaborHelado == 100 && venta.numSaborHelado != 500) {
            clientesChocolateNoFrutilla++;
        }

        // Verificar envío gratis para clientes
        int claveClienteSucursal = venta.numCliente * 10 + venta.numSucursal;
        if (tieneEnvioGratis(venta.numSucursal, venta.horario)) {
            clientesEnvioGratis[claveClienteSucursal] = true;
        } else {
            clientesEnvioGratis[claveClienteSucursal] = false;
        }

        // Verificar sabores con más de 15 kilos vendidos
        if (ventasPorSucursal[venta.numSaborHelado] > 15000) {
            saboresMas15Kilos.push_back(venta.numSaborHelado);
        }
    }

    // Mostrar resultados
    cout << "\n1) Ventas por sucursal:\n";
    for (const auto& venta : ventasPorSucursal) {
        string nombreSucursal;
        switch (venta.first) {
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
        cout << nombreSucursal << ": " << venta.second << " gramos" << endl;
    }

    cout << "\n2) Clientes que pidieron chocolate pero no frutilla: " << clientesChocolateNoFrutilla << endl;

    cout << "\n3) Números de clientes con envío gratis más de una vez en al menos una sucursal:\n";
    for (const auto& clienteEnvio : clientesEnvioGratis) {
        if (clienteEnvio.second) {
            cout << clienteEnvio.first / 10 << endl; // Obtener el número de cliente
        }
    }

    cout << "\n4) Sabores con más de 15 kilos vendidos:\n";
    for (const auto& sabor : saboresMas15Kilos) {
        cout << nombresSabores[sabor] << endl;
    }

    return 0;
}
