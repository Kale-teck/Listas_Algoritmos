#include <iostream>
using namespace std;

int main() {
    float total, cfab, pdist, imp;
    cout << "Insira o valor do seu veículo: ";
    cin >> total;
    
    pdist = (total/100)*28;
    imp = (total/100)*45;
    
    cout << pdist << " do valor pago é da distribuidora." << endl;
    cout << imp << " são impostos" << endl;
    cout << "O carro em sí custa " << total-(pdist+imp) << " reais";
    return 0;
}
