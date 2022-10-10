#include <iostream>
using namespace std;
int main() {

    float n1, n2, n3, n4, md;
    cout << "Informe sua nota, referente ao primeiro bimestre : ";
    cin >> n1;
    cout << "Informe sua nota, referente ao segundo bimestre : ";
    cin >> n2;
    cout << "Informe sua nota, referente ao terceiro bimestre : ";
    cin >> n3;
    cout << "Informe sua nota, referente ao quarto bimestre : ";
    cin >> n4;

    md = (n1+n2+n3+n4)/4;

    if (md > 5)
    {
        cout << "Aprovado!";
    } else {
        cout << "Reprovado :(";
    }

    cout << endl << "A sua média foi " << md << endl;
    

    return 0;
}