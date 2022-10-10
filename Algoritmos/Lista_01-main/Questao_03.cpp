#include <iostream>
using namespace std;
    int main() {
        float celsius, fahren;
        cout << "Olá! Diga-me a temperatura em Celsius\n Eu farei a conversão para Fahrenheit: ";
        cin >> celsius;
        fahren = (celsius * 9 / 5) + 32;
        cout << endl << celsius <<" graus Celsius equivalem à " << fahren << " graus Fahrenheit.\n";
        return 0;
    }