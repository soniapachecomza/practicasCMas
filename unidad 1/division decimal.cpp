#include <iostream>
using namespace std;

int main(){
    int dinero;
    int personas;
    float resultado;

    cout << "Ingresar la cantidad de dinero es: ";
    cin >> dinero;
    cout << "Ingresa la cantidad de personas: ";
    cin >> personas;

    resultado = (float)dinero/personas;
    cout << "Le corresponden a cada uno $: " << resultado << endl;


    return 0;
}
