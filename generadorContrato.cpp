//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

void replaceAll(string& str, const string& from, const string& to)
{
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos){
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

int main() {
	string nombre, apellido, fecha, empresa, monto;

	cout << "Ingrese su nombre: ";
	getline(cin, nombre);

	cout << "Ingresa la fecha del contrato (dd/mm/aaaa): ";
	getline(cin, fecha);

	cout << "Ingrese el nombre de la empresa: ";
	getline(cin, empresa);

	cout << "Ingrese el monto del contrato: ";
	getline(cin, monto);

	ifstream contratoFile("contrato.txt");
	if (!contratoFile) {
        cerr << "Error al abrir el archivo de contrato." << endl;
        return 1;
	}

	stringstream contratoStream;
	contratoStream << contratoFile.rdbuf();
	string contrato = contratoStream.str();

	replaceAll(contrato, "<NOMBRE>", nombre);
	replaceAll(contrato, "<APELLIDO>", apellido); // Corregir este reemplazo
	replaceAll(contrato, "<FECHA>", fecha);
	replaceAll(contrato, "<EMPRESA>", empresa);
	replaceAll(contrato, "<MONTO>", monto);

	std::ofstream contratoGenerado("contrato_generado.txt");
	if (!contratoGenerado) {
        cerr << "Error al crear el archivo de contrato generado" << endl;
        return 1;
	}

	contratoGenerado << contrato;

	contratoFile.close();
	contratoGenerado.close();

	cout << "Contrato generado con exito. Revise el archivo contrato_generado.txt" << endl;

	return 0;
}
