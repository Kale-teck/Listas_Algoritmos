#include <iostream>
using namespace std;
int main()
{
    float celsius = 10, fahren;

    while (celsius>=10 && celsius<=100)
    {
        fahren = (celsius * 9 / 5) + 32;
		cout << endl << celsius <<" C = " << fahren << " F\n";
        celsius += 10;
    }
    return 0;
}