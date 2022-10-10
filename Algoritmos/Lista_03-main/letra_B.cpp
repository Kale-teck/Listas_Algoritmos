#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Digite um valor para ver a tabuada : ";
    cin >> n;

    for (int cont = 0; cont <= 10; cont++)
    {
        cout << n << " X " << cont << " = " << n*cont << endl;
    }
    
    return 0;
}