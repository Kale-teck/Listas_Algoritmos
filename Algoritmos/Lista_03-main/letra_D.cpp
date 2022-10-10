#include <iostream>
using namespace std;
int main()
{
    int n, par;

    while (n <= 500)//n tem função de variável de controle
    {
        n++;
        if (n%2==0)
        {
            par = par + n;/*par armazena o valor da soma atual para que este  seja somado com o próximo número par*/
        }
    }
    cout << par << "\n";
    
    return 0;
}