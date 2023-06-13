//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	srand(time(0));
	int valorAleatorio = (rand()%100 + 1);
	cout << "Valor aleatorio (1 y 100): "<< valorAleatorio << endl;
	// aleatorio entre 200 y 300
	int min = 100, max = 200;
	valorAleatorio = rand()%((max + 1) - min) + min;
	cout << "Valor aleatorio (100 y 200): "<< valorAleatorio << endl;
	return 0;
}
