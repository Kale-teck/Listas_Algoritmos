#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int base = 3;
    int expo, resu;

    while (expo >= 0 && expo <= 15)
    { 
        while (expo == 0)
        {
            cout << 1 << " ";
            expo++;
        }
        while (expo == 1)
        {
            cout << base << " ";
            expo++;
        }
        resu = pow(base,expo);/*Não consegui executar a operação sem o uso do operador aritimético de exponenciação (pow(x,y)*/
        cout << resu << " ";
        expo++;
    }
    cout << "\n";
    return 0;
}