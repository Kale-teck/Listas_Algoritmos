#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int b, e;
    cout << "Digite um valor para a base : ";
    cin >> b;
    cout << " e outro para o expoente : ";
    cin >> e;

    if ((b, e) > 0)
    {
        cout << pow(b,e) << endl;
    } else {
        cout << "Os valores de entrada foram inválidos...";
    }



    return 0;
}