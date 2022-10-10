#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Digite um número : ";
    cin >> n;

    m = n*2;

    if(m > 30) {
        cout << n << " Multiplicado por 2 é " << m << endl;
    } else {
        cout << " resultado menor que 30 não pode ser publicado ! "; 
    }
    return 0;
}