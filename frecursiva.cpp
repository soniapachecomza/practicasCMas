//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;
// declarar funcion
void funcionRecursiva(int nro);
int main(){
    // imprimir del 1 al 5
    int valor = 5;
    funcionRecursiva(valor);
	return 0;
}
void funcionRecursiva(int nro){
    //caso base
    if(nro == 1){
        cout <<  nro << endl;
    }else{
        //caso recursivo
    funcionRecursiva(nro - 1);
    cout << nro << endl;
    }
}
