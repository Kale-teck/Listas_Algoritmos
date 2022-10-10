#include <iostream>
using namespace std;

int main() {
    int dia, mes, ano, total;
    
    cout << "Digite o dia do seu nascimento : ";
    cin >> dia;
    cout << "Digite o mês do seu nascimento : ";
    cin >> mes;
    cout << " e o ano : ";
    cin >> ano;
    
    total = abs(ano - 2022);
    
    cout << endl << "Você possui " << dia+(mes*30)+(ano*365) << 
    " dias de vida!" << endl;
    
    return 0;
}
}
