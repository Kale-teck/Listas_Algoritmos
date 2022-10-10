#include <iostream>
using namespace std;
int main()
{
    int n =50, p;

    for (int i=50; i <= 70; i++)
    {
        if (n%2==0)
        {
            p = p + n;
            cout << p << endl;
        }
        n++;
    }
    cout << "média = " << p/10;
    return 0;
}