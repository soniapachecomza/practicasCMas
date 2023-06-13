//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	const int renglon = 2;
	const int columna = 3;

	int matriz[renglon] [columna] = {
        {100, 200, 300},
        {400, 500, 600}
	};
	//matriz[0][0] = 100;
	//matriz[0][1] = 200;
	//matriz[0][2] = 300;
	//matriz[1][0] = 400;
	//matriz[1][1] = 500;
	//matriz[1][2] = 600;

	//cout << "Valor 1 [0][0] = "<< matriz[0][0] << endl;
	//cout << "Valor 6 [1][2] = "<< matriz[1][2] << endl;

	cout << "----Iteramos la matriz------"<< endl;
	for(int ren = 0; ren < renglon; ren++){
        for(int col = 0; col < columna; col++){
            cout << "\nMatriz["<< ren <<"]["<< col<< "] =  "<< matriz[ren][col];
        }
        cout << endl;
	}
	return 0;
}
