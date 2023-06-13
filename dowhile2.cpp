//Nombre:Sonia Pacheco
//TP N°:
//Actividad:
//Comentarios:
/*Un vendedor a realizado una serie de ventas y desea conocer aquellas de $200.00 o menos,
Las mayores a $ 200.00 pero inferiores a $ 400.00 y el numero de ventas de $ 400.00 o superiores,
tambien desea conocer la suma en cada una y la suma total de ventas realizadas*/
#include<iostream>
using namespace std;

int main(){
	int nVentas;
	float ventas;
	int cvp = 0, cvm = 0, cvg = 0;
	float vp = 0, vm = 0, vg = 0, ventasTotales= 0;
	int i = 1;

	cout<< "Cuantas ventas registradas: ";
	cin>>nVentas;

	do{
        cout<< "Total de ventas ( "<< i <<" ): ";
        cin>>ventas;
        if(ventas <= 200){
            cvp = cvp + 1;
            vp = vp + ventas;
        }else{
            if(ventas < 400){
                cvm = cvm + 1;
                vm = vm + ventas;
            }else{
                cvg = cvg + 1;
                vg = vg + ventas;
            }
        }
        i++;
	}while(i <= nVentas);
	cout<< "--------------------------"<<endl;
	cout<< "Cantidad de ventas menores a $ 200.00: "<<cvp<< " Suma $: "<<vp<<endl;
	cout<< "Cantidad de ventas entre $ 200.00 y $ 400.00: "<<cvm<< " Suma $: "<<vm<<endl;
	cout<< "Cantidad de ventas mayores a $ 200.00: "<<cvg<< " Suma $: "<<vg<<endl;
    cout<< "Ventas totales: $ "<<vp + vm + vg<<endl;
	return 0;
}
