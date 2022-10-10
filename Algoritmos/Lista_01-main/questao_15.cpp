#include <iostream>
using namespace std;
int main() {
    float grau;
    const float PI = 3.1415;
    cout << "Digite um valor em graus: ";
    cin >> grau;

    cout <<endl << grau << " grau(s) em radianos é " << grau * PI / 180 << " e " << grau * PI / 180 << " radianos equivalem a " << grau << " grau(s), respectivamente. " << endl; 
    return 0;
}