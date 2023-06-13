//Nombre:Sonia Pacheco
//Comentarios:Ingresar 3 numeros por teclado y obtener el mayor
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
    setlocale(LC_CTYPE, "Spanish");

    int num1, num2, num3, mayor;
    cout<<"Ingresa el primero número: ";
    cin>>num1;

    cout<<"Ingresa el segundo número: ";
    cin>>num2;

    cout<<"Ingresa el tercer número: ";
    cin>>num3;

        if(num1 > num2){
            if(num2 > num3){
                mayor = num1;
            }else{
                mayor = num3;
            }
        }else{
            if(num2 > num3){
                mayor = num2;
            }else{
                mayor = num3;
            }
        }
    cout<<"El número mayor es: "<<mayor;
	return 0;
}
