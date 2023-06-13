//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float nro;
	int redondeo, truncado;
	nro = 8.6;
	redondeo = round(nro);
	cout << "Valor " << nro << " redondeado "<< redondeo << endl;
    truncado = trunc(nro);
    cout << "Valor "<< nro << " truncado " << truncado << endl;
	return 0;
}
