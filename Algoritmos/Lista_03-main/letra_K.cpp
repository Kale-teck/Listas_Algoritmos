#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    long int grao = 1;

    if (grao == 1)
    {
        grao = 1+1;
    }
    grao = pow(grao,63);
    cout << grao;
    
    return 0;
}