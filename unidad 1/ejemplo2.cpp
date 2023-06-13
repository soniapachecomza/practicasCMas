#include <iostream>
using namespace std;

int main(){
    int dinero;
    int personas;
    float resultado;

    cout << "Ingresar la cantidad de dinero: ";
    cin >> dinero;

    cout << "Ingresar la cantidad de personas: ";
    cin >> personas;

    resultado = (float)dinero/personas;

    cout << "le corresponde a cada uno $: " << resultado << endl;
    return 0;
}
