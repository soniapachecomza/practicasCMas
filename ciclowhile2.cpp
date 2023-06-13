//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
/*Dado una lista de N, numeros:
    a) Obtenga cuantos numeros fueron mayores a cero y la suma de dichos numeros. (positivos)
    b) Otenga cuantos numeros ingresados fueron menores a cero y la suma de dichos numeros (negativos)
    c) Calcule el promedio de los numeros positivos
    d) Obtenga el promedio de todos los numeros
*/
#include<iostream>
using namespace std;

int main(){
	int N;
	int num;
	int cuentaPositiva = 0;
	int CuentaNegativa = 0;
	float sumaPositivos = 0;
	float sumaNegativos = 0;
	float promPositivos;
	float promGral;
    int i = 1;

    cout<< "Cuantos numeros hay en la lista: ";
    cin>>N;
	while(i<= N){
        cout<< "Ingrese el numero "<< i << " de la lista: ";
        cin>>num;
        if(num > 0){
            cuentaPositiva = cuentaPositiva + 1;
            sumaPositivos = sumaPositivos + num;
        }else{
            CuentaNegativa = CuentaNegativa + 1;
            sumaNegativos = sumaNegativos + num;
        }
        i++;
	}
	promPositivos = sumaPositivos / cuentaPositiva;
	promGral = (sumaPositivos + sumaNegativos)/N;
	cout<< "--------------------------------------"<<endl;
	cout<< "Cantidad de numero positivos:  "<<cuentaPositiva<<endl;
	cout<< "Cantidad de numeros negativos: "<<CuentaNegativa<<endl;
	cout<< "Suma numeros positivos: "<<sumaPositivos<<endl;
	cout<< "suma numeros negativos: "<<sumaNegativos<<endl;
	cout<< "Promedio numeros positivos: "<<promPositivos<<endl;
	cout<< "Promedio de todos los numeros: "<<promGral<<endl;
	return 0;
}
