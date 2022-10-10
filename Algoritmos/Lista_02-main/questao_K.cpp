#include <iostream>
using namespace std;
int main()
{
    float n;
    cout << "Informe um valor entre 1 e 9 : ";
    cin >> n;

    if (n>=1 && n<=9)
    {
        cout << "O valor está na faixa permitida" << endl;
    } else
    {
        cout << "O valor está fora da faixa permitida" << endl;
    }
    
    
    return 0;
}