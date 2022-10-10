#include <iostream>
#include <cmath>
using namespace std;
    int main() {
        float volume;
        int cubo, raio;
        cout << "Digite o valor correspondente ao raio de uma esfera: ";
        cin >> raio;
        cubo = (raio^3);
        volume = (4/3) * 3.14159 * raio;
        cout << "O valor aproximado do volume da sua esfera é " << volume << "\n";
        return 0;
    }