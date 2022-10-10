#include <iostream>
using namespace std;
int main() {
    int sala;
    cout << "Informe o salário: ";
    cin >> sala;
    float reaj;
    cout << "O reajuste em % : ";
    cin >> reaj;

    cout << "O seu salário/mês de " << sala << " com reajuste de " <<
    reaj << "% é: " << (sala/100*reaj)+sala;
    return 0;
}