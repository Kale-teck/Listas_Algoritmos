#include <iostream>
using namespace std;
int main()
{   
    int n, soma;

    while (n <= 100)
    {
        n++;
        soma = soma + n;
    }
    cout << soma << "\n";
    
    return 0;
}