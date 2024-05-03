//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:La asociación de medicina ha determinado las
//siguientes escalas de temperatura corporal:
//--------------------------------------------
//*Hipotermia: < 35°C
//*Temperatura normal: >=35 y hasta 37.5
//*Moderadamente altos: >35.5 t hasta 38.5
//*Alto: > 38.5 hasta 39
//*Gravemente alto: mayor a 39

#include<iostream>
using namespace std;

int main(){
	float temp;
	const float Hipotermia = 35;
	const float Normal = 37.5;
	const float Mod_alta = 38.5;
    const float alto = 39;

    cout << "Ingrese temperatura corporal: ";
	cin >> temp;

	if(temp < Hipotermia){
        cout << "Hipotermia" << endl;
	}
	else {
        if(temp >= Hipotermia && temp <= Normal){
            cout << "normal" << endl;
        }
        else {
            if(temp > Normal && temp <= Mod_alta){
                cout << "Moderadamente alta" << endl;
            }
            else {
                if(temp > Mod_alta && temp <= alto){
                    cout << "Alto" << endl;
                }
                else{
                    cout << "Gravamente alto" << endl;
                }
            }
        }
	}
	return 0;
}
