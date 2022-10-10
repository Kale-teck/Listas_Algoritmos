#include <iostream>
using namespace std;
int main()
{   
    long int n = 15;

    while (n>=15 && n<=200)
    {
        cout << n*n << endl;
        n += 3;
    }
    
    return 0;
}