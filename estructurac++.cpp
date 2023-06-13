//Nombre:Sonia Pacheco
//Legajo: 26047
//Evaluación:
//Comentarios: si la calificación del exmen es mayor o igual a 60 entonces imprimir aprobado
#include<iostream>
#include<locale.h>

using namespace std;

int main(){
    setlocale(LC_CTYPE, "Spanish");
    float nota;
    cout<<"Introduce la nota del estudiante: ";
	cin>>nota;
	if(nota>=60){
        cout<<"Aprobo";
	}else{
	    cout<<"Desaprobado";
	}
	return 0;
}
