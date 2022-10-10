#include <iostream>
using namespace std;
int main() {
    float n1, n2, n3, n4, md1, ne, md2;
    cout << "insira sua nota referente a cada bimestre: " << endl;
    cout << "Primeiro bimestre : ";
    cin >> n1;
    cout << "Segundo bimestre : ";
    cin >> n2;
    cout << "Terceiro bimestre : ";
    cin >> n3;
    cout << "Quarto bimestre : ";
    cin >> n4;

    md1 = (n1+n2+n3+n4)/4;

    if (md1 >= 7)
    {
        cout << "Aprovado" << endl;
        cout << "Sua média foi " << md1 << endl;
    }
    else
    {
        cout << "Informe a nota do exame : " << endl;
        cin >> ne;
        md2 = (md1+ne)/2;
        if (md2 >= 5)
        {
            cout << "Aprovado em Exame! " << endl;
            cout << "Sua média foi " << md2 << endl;
        }
        else
        {
            cout << "Reprovado" << endl;
            cout << "Sua média foi " << md2 << endl;
        }
    }

}