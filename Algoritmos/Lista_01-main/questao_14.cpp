#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, x2, y1, y2;
    cout << " Vamos calcular a distância entre dois pontos " << endl;
    cout << "valor de X1 ";
    cin >> x1;
    cout << "valor de X2 ";
    cin >> x2;
    cout << "valor de Y1 ";
    cin >> y1;
    cout << "valor de Y2 ";
    cin >> y2;
    
    cout << "A distância entre os dois pontos é " 
    << sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return 0;
}
