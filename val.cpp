//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;

int main(){
	int filas;
	int columnas;

	cout << "Introduce las filas: ";
	cin>> filas;
	cout << "Introduce las columnas: ";
	cin>> columnas;

	//int matriz[filas][columnas];
	int **matriz = new int*[filas];
	for(int i = 0; i < filas; i++){
        matriz[i] = new int[columnas];
	}

    for(int fila = 0; fila < filas; fila++){
        for(int col = 0; col < columnas; col++){
            cout << "Dato["<<fila<< "] ["<<col<<"] = ";
            cin>> matriz[fila][col];
        }
    }
    cout << "----Itermos Matriz-----"<<endl;
    for(int fila = 0; fila < filas; fila++){
        for(int col = 0; col < columnas; col++){
            cout << "Matriz[" << fila << "]["<< col<<"] = "<<matriz[fila][col];
        }
        cout<< endl;
    }
    for(int i = 0; i < filas; i++){
        delete[] matriz[i];
    }
    delete[] matriz;
	return 0;
}
