#include <iostream>
using namespace std;
int main()
{
    int vet[20];

    for (int i = 0; i < 15; i++)
    {
        cin >> vet[i];
    }
    for (int y = 0; y < 15; y++) {
        for (int t = y+1; t < 15; t++) {
            if (vet[y]==vet[t])
            {
                cout << "repetiu " << vet[y] << " e " << vet[t] << " posição " << y+1 << " e " << t+1 << endl; 
            }   
        }
    }
    return 0;
}