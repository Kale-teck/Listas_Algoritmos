#include <iostream>
#include <string>
using namespace std;
int main()
{
    string nome;
    cout << "Informe seu nome ";
    cin >> nome;
    char sexo;
    cout << "Seu sexo (se M ou F) : ";
    cin >> sexo;

    if (sexo == 'M' || sexo == 'F')
    {
        if (sexo == 'M')
        {
            cout << "Ilmo. Sr. ";
        }
        else
        {
            cout << "Ilma. Sra. ";
        }
        
    } else {
        cout << "Sexo informado inválido ";
    }
    cout << nome << endl;
    return 0;
}