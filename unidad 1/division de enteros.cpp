#include <iostream>
using namespace std;

int main(){
    ///division entera
    int libros;
    int hermanos;
    int resultado;
    int resto;
    cout << "Ingresa la cantidad de libros: ";
    cin >> libros;
    cout << "Ingresa la cantidad de personas: ";
    cin >> hermanos;
    resultado = libros/hermanos;
    resto = libros%hermanos;
    cout << "Le corresponde a cada uno: " << resultado <<endl;
    cout << "Restan " << resto << " libros-";

    return 0;
}
