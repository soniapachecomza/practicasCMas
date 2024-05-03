//Nombre:Sonia Pacheco
//Legajo: 26047
//Consigna:
#include<iostream>
#include<string>
#include<windows.h>
#define MAX 96

using namespace std;

string morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "--.--",
                "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--",
                "....-", "......", "-....", "--...", "---..", "-.-.-", "--..--", "---...", "..--..", ".----.", "-....-", "-...--",
                ".--.-.", "-...-", ".-..-.", "-.-.--"
};

string ascii[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
                    "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ".", ",", ":", "?", "'", "/", "@", "=", "!", "¡"};

void convertir(string cadena)
{
    for(int i = 0; i < cadena.length(); i++){
        char letra = toupper(cadena[i]);

        if(letra == ' ')
        {
            cout << " ";
            Sleep(500);
            continue;
        }
        for (int j = 0; j < MAX; j++)
        {
            if(letra == ascii[j][0])
            {
                for(int jj = 0; jj < morse[j].length(); jj++)
                {
                    if(morse[j][jj] == '.')
                    {
                        cout << ".";
                        Beep(300, 100);
                        Sleep(200);
                    }
                    else if(morse[j][jj] == '-')
                    {
                        cout << "-";
                        Beep(700, 100);
                        Sleep(200);
                    }
                }
                cout << " ";
                break;
            }
        }
        Sleep(500);
    }
}

int main(){
    string ingreso;
    cout<< "Ingrese la palabra a convertir en morse-> ";
    cin>>ingreso;

    convertir(ingreso);
    return 0;
}
