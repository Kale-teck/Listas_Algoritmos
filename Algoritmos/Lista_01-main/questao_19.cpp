#include <iostream>
using namespace std;
int main() {
    float velo, dist, temp;
    cout << "Qual velocidade do projétil em km/m ? ";
    cin >> velo;
    cout << "Qual a distância percorrida em km ? ";
    cin >> dist;
    cout << "Informe o tempo do trajeto em minutos: ";
    cin >> temp;
    

    velo = (dist*1000)/(temp*60);
    cout << endl << "A velocidade em m/s foi de " << velo << "m/s para percorrer " << dist << "km's em " << temp << "min" << endl;
    return 0;
}