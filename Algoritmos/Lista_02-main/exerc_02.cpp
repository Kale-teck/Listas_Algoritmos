#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Digite um número positivo ou negativo";
    cin >> n;
    
    if (n >= 0) {
        cout << "O valor absoluto de " << n << " é " << abs(n);
    } else {
        cout << "O valor absoluto de " << n << "multiplicado por -1 é "
        << abs(n*-1);
        
    }
}
