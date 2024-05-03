//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:

#include <iostream>
#include <cstring>

using namespace std;

char letras[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

void cifrado()
{
    char txt[30];
    cin.ignore();
    cout << "Ingrese texto a cifrar: ";
    cin.getline(txt, 30);
    for(int i = 0; i < strlen(txt); i++)
    {
        for (int j = 0; j < strlen(letras); j++)
        {
            if (txt[i] == letras[j])
            {
                int aux = (j + 3) % 52;
                txt[i] = letras[aux];
                break;
            }
        }
    }
    cout << "\t\nEl texto cifrado es: " << txt << endl;
}

void descifrado()
{
    char txt[30];
    cin.ignore();
    cout << "Ingrese texto a descifrar: ";
    cin.getline(txt, 30);
    for (int i = 0; i < strlen(txt); i++)
    {
        for (int j = 0; j < strlen(letras); j++)
        {
            if (txt[i] == letras[j])
            {
                int aux = (j - 3 + 52) % 52;
                txt[i] = letras[aux];
                break;
            }
        }
    }
    cout << "\t\nEl texto descifrado es: " << txt << endl;
}

int main()
{
    int op;
    do
    {
        cout << "-----¿Que desea hacer?-----\n" << endl;
        cout << "1.<<CIFRAR>>" << endl;
        cout << "2.<<DESCIFRAR>>" << endl;
        cout << "3.<<SALIR>>" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            cifrado();
            break;
        case 2:
            descifrado();
            break;
        }
        system("PAUSE");
    } while (op != 3);

    return 0;
}
