#include <iostream>
using namespace std;
    int main() {
        int base, altura, area;
        cout << "Digite um valor para a base de um retângulo: ";
        cin >> base;
        cout << "Digite um valor para a altura do retângulo: ";
        cin >> altura;
        area = base * altura;
        cout << "A área do seu retângulo é " << area <<"\n";
        return 0;
    }