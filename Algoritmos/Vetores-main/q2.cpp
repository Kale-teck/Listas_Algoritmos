#include <iostream>
using namespace std;
int main()
{
    float r[10];
    for (int i = 0; i < 10; i++) {
        r[i] = i-5;
    }

    for (int h = 9; h > -1; h--) {
        cout << r[h] << "  ";
    }

    return 0;
}