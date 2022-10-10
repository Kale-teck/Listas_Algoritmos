#include <iostream>
#include <string>
using namespace std;
int main()
{
    int idade[5];
    float altura[5];

    for (int i=0; i < 5; i++) {
        cout << " Idade : ";
        cin >> idade[i];
        cout << " Altura : ";
        cin >> altura[i];
        }

    for (int k = 5; k > 0; k--) {
        cout << " Altura " << altura[k] << "\n";
        cout << " Idade " << idade[k] << "\n" << endl;
    }  
    return 0;
}