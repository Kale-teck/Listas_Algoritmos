#include <iostream>
using namespace std;
int main()
{
    int v[5];

    for (int i = 0; i < 5; i++) {
        v[i] = i+1;
    }
    for (int j = 0; j < 5; j++) {
        cout << v[j] << " ";
    }
    cout << endl;
    return 0;
}