#include <iostream>
using namespace std;
int main()
{
    int notas[4];
    int soma;
    for (int i = 0; i < 4; i++) {
        cout << "Insira uma nota ";
        cin >> notas[i];
        soma += notas[i];
    }

    for (int g=0; g<4; g++) {
        cout << " Nota " << g+1 << " foi : " << notas[g] << endl;
    }
    cout << " A média obtida das 4 notas foi " << soma/4 << endl;
          
    return 0;
}