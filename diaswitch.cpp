//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
    int diaSemana;
	cout << "Ingresa el dia de la semana ( 1 al 7): "<< endl;
	cin >> diaSemana;
	switch (diaSemana){
        case 1:
            cout << "Es Lunes" << endl;
            break;
        case 2:
            cout << "Es Martes" << endl;
            break;
        case 3:
            cout << "Es Miercoles" <<endl;
            break;
        case 4:
            cout << "Es Jueves" << endl;
            break;
        case 5:
            cout << "Es Viernes" << endl;
            break;
        case 6:
            cout << "Es Sabado"<< endl;
            break;
        case 7:
            cout << "Es Domingo" << endl;
            break;
        default: cout << "El valor erroneo es: "<< diaSemana<< endl;
	}
	return 0;
}
