#include <iostream>
using namespace std;
int main() {

    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "O antecessor de " << numero << " é " << numero - 1 << endl;
    cout << "O sucessor de " << numero << " é " << numero + 1 << endl;
    return 0;
}