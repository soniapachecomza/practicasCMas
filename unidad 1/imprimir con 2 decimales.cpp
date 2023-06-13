#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float n1, n2, total;

    cout << "Ingresa numero 1: ";
    cin >> n1;
    cout << "Ingresa numero 2: ";
    cin >> n2;

    if(n2 == 0){
        cout << "Valores no validos ";
        return 0;
    }

   total = n1/n2;
   cout << "El resultado es: " << fixed <<setprecision(2)<<total<<endl;
    return 0;
}
