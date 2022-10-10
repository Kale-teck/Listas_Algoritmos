#include <iostream>
using namespace std;
int main()
{
    int v[20], g1, g2;
    for (int i = 0; i < 20; i++)
    {
        v[i] = (1 + rand() % (50 - 1));
    }
    cin >> g1;
    for (int p = 0; p < 20; p++)
    {
        if(g1==v[p]) {
            cin >> g2;
        }
    }
    return 0;
}