#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a[10], b[10], c[20], x=0,y=0,z=0;

    for (int i = 0; i < 10; i++)
    {
        a[i] = i+1;
    }
    for (int p = 0; p < 10; p++)
    {
        b[p] = p+11;
    }
    while (x > -1 && x < 20) {
        if (x==0) {
            c[x] = a[x];
        }
        if (x==1)
        {
            c[x] = b[x];
        }
        if (x%2==0) {
            c[x] = a[y];
            y++;
        }
        if (x%2!=0) {
            c[x] = b[z];
            z++;
        }
        x++;
    }
    for (int d = 0; d < 20; d++)
    {
        cout << c[d] << "  ";
    }
    cout << endl;
    return 0;
}