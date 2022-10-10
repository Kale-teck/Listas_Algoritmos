#include <iostream>
using namespace std;
int main() {
    float n1, n2, n3;
    cout << "insira suas notas referentes às avaliações citadas: ";
    cout << endl << "nota 1 : ";
    cin >> n1;
    cout << endl << "nota 2 : ";
    cin >> n2;
    cout << endl << "nota 3 : ";
    cin >> n3;

    cout << endl << "A sua média final foi " << ((2*n1)+(3*n2)+(5*n3))/10 << endl;
    return 0;
}