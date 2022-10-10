#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Digite um número para saber se é par ou ímpar : ";
    cin >> n;

    if ( n%2 == 0)
    {
        cout << " O valor de " << n << " é par " << endl;
    } else {
        cout << "O valor de " << n << " é ímpar " << endl;
    }
    
    return 0;
}