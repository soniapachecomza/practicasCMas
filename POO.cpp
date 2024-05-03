//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
using namespace std;

// aqui van las clases
class Pokemon{
    //estos son los atributos
public:
    string nombre;
    float peso;

    // estos son los metodos y el constructor
public:
    Pokemon(string , float);
    void Saludo();
};

Pokemon::Pokemon(string _nombre, float _peso){
    nombre = _nombre;
    peso = _peso;
}
//inicializar
void Pokemon::Saludo(){
    cout << "El pokemon que te saluda es: "<<nombre<<"  y el peso es "<<peso <<" kilogramos\n";
}
int main(){
//forma larga
	Pokemon pokemon1 = Pokemon("Chicorita", 0.75);
	pokemon1.Saludo();
//forma corta
	Pokemon pokemon2("Pikachu", 1.23);
	pokemon2.Saludo();
	return 0;
}
