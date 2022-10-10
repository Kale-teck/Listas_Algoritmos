#include <iostream>
using namespace std;
int main() {
    float a, b;
    cout << "Digite um valor: ";
    cin >> a;
    cout << "digite outro: ";
    cin >> b;

    cout << "Soma entre "<< a <<" e "<< b <<" resulta em " << a+b <<endl;
    cout << "Subtração entre "<< a <<" e "<< b <<" resulta em " << a-b <<endl;
    cout << "Divisão entre "<< a <<" e "<< b <<" resulta em " << a/b <<endl;
    cout << "Multiplicação entre "<< a <<" e "<< b <<" resulta em " << a*b <<endl;
    return 0;
}