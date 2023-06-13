//Nombre:Sonia
//TP N°:2
//EJ N°:15
//Comentarios:Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
// obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
//- “Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
//- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
//- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
//- “Recursa la materia”, si no aprobó ningún examen parcial.

#include<iostream>
using namespace std;

int main(void){
	 int nota1, nota2, nota3, nota4;

    cout << "Ingrese la nota del primer examen: ";
    cin >> nota1;

    cout << "Ingrese la nota del segundo examen: ";
    cin >> nota2;

    cout << "Ingrese la nota del tercer examen: ";
    cin >> nota3;

    cout << "Ingrese la nota del cuarto examen: ";
    cin >> nota4;

    if (nota1 >= 7 && nota2 >= 7 && nota3 >= 7 && nota4 >= 7) {
        cout << "Promociona";
    } else if ((nota1 >= 4 && nota2 >= 4 && nota3 >= 4) || (nota1 >= 4 && nota2 >= 4 && nota4 >= 4) || (nota1 >= 4 && nota3 >= 4 && nota4 >= 4) || (nota2 >= 4 && nota3 >= 4 && nota4 >= 4)) {
        cout << "Rinde examen final";
    } else if (nota1 >= 4 || nota2 >= 4 || nota3 >= 4 || nota4 >= 4) {
        cout << "Recupera Parciales";
    } else {
        cout << "Recursa la materia";
    }
	return 0;
}
