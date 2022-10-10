#include <iostream>
using namespace std;
int main()
{
    int n = 1, a=0, b=1;

    if (n == 1)
    {
        cout << 0 << " " << 1;
    }
    for (int i = 0; i <= 13; i++)
    {
        n = a + b; // 1 = 0 + 1 (2)
        cout << " " << n; // cout << (2)
        a = b; // 0 = 1 (1)
        b = n; // 1 =  2 (3)
    }
    cout << endl; 
    return 0;
}