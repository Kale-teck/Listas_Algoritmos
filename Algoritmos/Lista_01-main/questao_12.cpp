
#include <iostream>
using namespace std;

int main() {
    float salfix, comcar, cincop, nuncar, valcar, comiss;
    cout << "Informe seu salário fixo: ";
    cin >> salfix;
    cout << "Informe o número de carros que vendeu ";
    cin >> nuncar;
    cout << "Informe o valor de cada carro ";
    cin >> valcar;
    cout << "Informe sua comissão por carro ";
    cin >> comiss;
    
    comcar = (comiss/100)*valcar;
    cincop = (5/100)*(nuncar*valcar);
    
    cout << endl << "Seu salário esse mês é : " << 
    salfix+comcar+cincop << endl << "Seu valor total em vendas foi "
    << nuncar*valcar << endl;
    
    
    return 0;
}
