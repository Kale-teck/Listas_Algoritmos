#include <iostream>
using namespace std;
int main()
{
    int a, b, ca, r, e, cb;
    a=4;
    b=4;

    ca = 2;
    r = b;

    while (ca <= a)
    {
        e = b;
        cb = 1;
            while (cb < ca)
            {
                e = e * b;
                cb = cb + 1;
            }
    r = r + e;
    ca = ca + 2;
    }
    cout << r; 
    
    return 0;
}