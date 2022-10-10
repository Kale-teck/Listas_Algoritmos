#include <iostream>
using namespace std;
    int main() {
        float farenh, celsius;
        cout << "Digite um valor de temperatura em Farenheit: ";
        cin >> farenh;
        celsius = ((farenh - 32) * 5) / 9;
        cout << "\n" << farenh << " graus Farenheit equivalem à " << celsius
        << " graus celsius!\n";
        return 0;
    }