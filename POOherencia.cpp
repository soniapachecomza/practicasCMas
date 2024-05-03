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

//clase hijo
class Pokemons_Fuego : public Pokemon{
public:
    int vida;
    char genero;
public:
    Pokemons_Fuego(string, float, int, char);
    void Mostrar_Pokemon();
};

Pokemons_Fuego :: Pokemons_Fuego(string _nombre, float _peso,int _vida, char _genero) : Pokemon(_nombre, _peso){
vida = _vida;
genero = _genero;
}

void Pokemons_Fuego::Mostrar_Pokemon(){
    Saludo();
    cout << "El pokemon tiene "<<vida<< " puntos de vida y su genero es: "<<genero;
}
int main(){

	Pokemons_Fuego pokemon1("Charmander", 0.95, 60, 'M');
	pokemon1.Mostrar_Pokemon();

	return 0;
}
