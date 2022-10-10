#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int A[10], a=1,b=20, x, q=0;
    for (int i = 0; i < 10; i++)
    {
        x = (a + rand() % (b - a));
        A[i] = x;
    }
    cout << " Digite um valor ";
    cin >> x;
    for (int j=0; j<10; j++)
    {
        if (x == A[j]) {
        q++;
        break;
        }      
    }
    if (q==1)
    {
        cout << " Achei " << endl;
    } else {
        cout << " Não achei " << endl;
    }
    
    return 0;
}