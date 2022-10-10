#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0;
    cout << "Este programa ler números positivos e encerra \n quando um negativo for digitado..." << endl;
    while (a >= 0)//condição para funcionamento
    {
        cin >> a;//entrada de a
        if (a > b)// compara o valor atual com b
        {
            b = a;// só armazena caso seja maior que o anterior 
        }
        if (a < c)// compara com c (0)
        {
            c = a;// só armazena se for menor que o valor atual
        }
    }
    cout << "O maior valor digitado foi : " << b << endl;
    cout << "O menor foi : "<< c << endl;

    return 0;
}