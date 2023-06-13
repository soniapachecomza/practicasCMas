//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
#include<iostream>
using namespace std;
class Alumnos{
public:
    string nombre;
    string grado;
    int edad;
    double nota;


    Alumnos(string nombre_alumno, string grado_alumno, int edad_alumno, double nota_alumno){
    nombre = nombre_alumno;
    grado = grado_alumno;
    edad= edad_alumno;
    nota = nota_alumno;
    }

};
int main(){
	Alumnos alumno1("Juan", "Medicina",25, 6.1 );

	Alumnos alumno2("Juan", "Profesorado", 28, 1.2);

	Alumnos alumno3("Fernando", "Ingenieria", 45, 8.7);

	cout <<alumno1.grado << endl;
	cout <<alumno2.grado << endl;
	cout <<alumno3.grado << endl;
	return 0;
}
