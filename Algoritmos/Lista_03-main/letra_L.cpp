#include <iostream>
using namespace std;
int main()
{
    long int n, aux=1, prod=1, soma;

    cout << "Fatorial de: ";
    cin >> n;// valor de entrada (partida da contagem)

    while (n < 16)// n aumentará até 15
    {
    while(aux<=n){//bloco do fatorial
        prod *= aux;//prod multiplica o seu valor atual por aux
        aux++;//aux aumenta 1 a cada volta fazendo assim o fatorial ex: 1*2*3...
    }
    soma += prod; //soma o último fatorial com o próximo que virá
    cout << "Fatorial: " << prod << endl;//Imprime !n a cada volta
    cout << "Soma do fatorial " << soma << endl << endl;//Imprime a soma de !n
    n++;// incremento de n
    }
    return 0;
}