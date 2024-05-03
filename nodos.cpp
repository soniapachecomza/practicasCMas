//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

	struct nodo {
        int n;
        nodo *sig;
	}*cab= NULL, *aux, *aux1;
    do{
        aux=(nodo*)malloc(sizeof (struct nodo));
		cout << "Ingresa un numero: ";
        cin >> aux ->n;

        if(cab == NULL){
            cab = aux1=aux;
        }
        else{
            aux1->sig=aux;
            aux1=aux;
            aux1->sig=NULL;
        }
	}while(aux->n!=0);

	cout << "Tu lista es: "<<endl;
	aux1=cab;
	while(aux1!=NULL){
        cout<<aux1->n<<" - ";
        aux1=aux1->sig;
	}
	return 0;
}
