//Nombre:Sonia
//TP N�:3
//EJ N�:5
//Comentarios:Hacer un programa para ingresar un N valor que indica la
//cantidad de n�meros que componen una lista y luego solicitar se ingresen
// esos N n�meros. Se pide informar cuantos son positivos
#include<iostream>
#include<locale.h>
using namespace std;

int main(void){
    int cantidad, num, contador_positivos = 0;
    cout << "Ingrese la cantidad de n�meros que componen la lista: ";
    cin >> cantidad;
    cout << endl;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese el n�mero [" << i + 1 << "]: ";
        cin >> num;

        if (num > 0)
        {
            contador_positivos++;
        }
    }

    cout << endl;
    cout << "Cantidad de n�meros positivos: " << contador_positivos;
	return 0;
}
