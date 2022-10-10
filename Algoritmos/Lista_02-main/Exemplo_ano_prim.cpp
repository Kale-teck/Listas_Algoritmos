#include <iostream>
using namespace std;
int main()
{
    int ano, aux;
    cin >> ano;

    for (aux = ano; aux <= 2022; aux++)
    {
        if (aux%2 != 0) {
            cout << aux << endl;
        }
    }
    return 0;
}