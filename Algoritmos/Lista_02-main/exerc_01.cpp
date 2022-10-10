#include <iostream>
using namespace std;
int main() {
    int a, b;
    
    cout << "Digite um número: ";
    cin >> a;
    cout << "Digite outro: ";
    cin >> b;
            
        if(a >= b) {
            cout << "A diferença de " << a << " e " << b << " é "
            << a - b;
        } else {
            cout << "A diferença entre " << b << " e " << a << " é "
            << b - a;
        }
        return 0;
}
