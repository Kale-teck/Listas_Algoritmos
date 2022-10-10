#include <iostream>
using namespace std;
    int main() {
        float total, brancos, nulos;
        cout << "Número total de eleitores: ";
        cin >> total;
        cout << "Número de votos brancos: ";
        cin >> brancos;
        cout <<  "e a quantidade de nulos: ";
        cin >> nulos;

        cout << "Os votos brancos, representam " << (brancos*100)/total << "%\n";
        cout << "Os votos nulos foram " << (nulos*100)/total << "%\n";
        cout << "Os votos válidos foram " << abs(nulos + brancos - total)*100/total << "%\n";
        
        return 0;
    }