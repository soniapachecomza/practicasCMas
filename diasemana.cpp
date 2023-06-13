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

	if(diaSemana == 1){
        cout << "Es Lunes"<< endl;
	} else{
        if(diaSemana == 2){
           cout << "Es Martes"<< endl;
        } else{
            if(diaSemana == 3){
               cout << "Es Miercoles"<< endl;
            } else{
                if(diaSemana == 4){
                    cout << "Es Jueves"<< endl;
                } else {
                    if(diaSemana == 5){
                        cout << "Es Viernes"<< endl;
                    } else {
                        if (diaSemana == 6){
                           cout << "Es Sabado"<< endl;
                        }else{
                            if(diaSemana == 7){
                                cout << "Es DOMINGO"<< endl;
                            } else{
                            cout << "Valor de dia errorneo: "<< diaSemana<< endl;
                            }
                        }

                    }
                }
            }
        }
	}
	return 0;
}
