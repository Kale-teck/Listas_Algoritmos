#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0, d = 0, i=0;
    cout << "Este programa ler números positivos e encerra \n quando um negativo for digitado..." << endl;
    while (a >= 0)//condição para funcionamento
    {
        cin >> a;//entrada de a
        d += a;
        if (a > b)// compara o valor atual com b
        {
            b = a;// só armazena caso seja maior que o anterior 
        }
        if (a < c)// compara com c (0)
        {
            c = a;// só armazena se for menor que o valor atual
        }
        i++;
    }
    cout << "O maior valor digitado foi : " << b << endl;
    cout << "O menor foi : "<< c << endl;
    cout << "O somatório dos valores digitados foi : " << d << endl;
    cout << "Foram digitados " << i << " valores" << endl;
    cout << "A média dos valores digitados foi : " << d/i << endl;
    return 0;
}