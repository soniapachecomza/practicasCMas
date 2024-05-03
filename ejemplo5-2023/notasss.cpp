//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
using namespace std;

int main(){

    setlocale(LC_ALL, "Spanish");

	int nota1, nota2, nota3, nota4;
	string mensaje;

	cout << "Ingresa primer nota: ";
	cin >> nota1;
	cout << "Ingresa segunda nota: ";
	cin >> nota2;
    cout << "Ingresa tercer nota: ";
	cin >> nota3;
    cout << "Ingresa cuarta nota: ";
	cin >> nota4;

	if((nota1 >= 7) && (nota2 >= 7) && (nota3 >= 7) && (nota4 >= 7)){
        mensaje = "Promociona";
	}
	else{
        if ((nota1 < 4) && (nota2 < 4) && (nota3 < 4) && (nota4 < 4)){
            mensaje = "Recursa";
        }
        else{
            if((nota2 >= 4 && nota3 >= 4 && nota4 >= 4) ||
               (nota1 >= 4 && nota3 >= 4 && nota4 >= 4) ||
               (nota1 >= 4 && nota2 >= 4 && nota4 >= 4) ||
               (nota1 >= 4 && nota2 >= 4 && nota3 >= 4))
               {
                mensaje = "Rinde final";
            }
            else{
                 mensaje = "Recupera parciales";
                }
        }
	}

	cout << "Situación del alumno: " << mensaje << endl;
	return 0;
}
