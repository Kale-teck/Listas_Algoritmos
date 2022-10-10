#include <iostream>
using namespace std;
int main()
{
    int n, m, aux, sum;

    cout << "insira um valor ";
    cin >> n;
    m = n + 10;//m vai servir como uma variável de controle
    aux = n;//ponto de partida
    while(aux >=n && aux<=m)//range
    {
        sum += aux;//sum = n + o próximo n
        aux++;
    }
    
    cout << "Somatório de " << n << " a " << m << " é " << sum << " com média de " << sum/10 << endl;
    return 0;
}