#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int dez[10][4], som[10], vez;
    float med[10];

    for (int i = 0; i < 10; i++) {
        cout << " ALUNO : " << i+1 << endl;
        for (int f = 0; f < 4; f++) {
            cout << " Nota " << f+1 << " : ";
            cin >>  dez[i][f];
            som[i] += dez[i][f];
            med[i] = (som[i])/4;
            if (med[i] >= 7) {
                vez++;
            }
        }
    }
    
    cout << " SÃO " << vez << " ALUNOS COM MÉDIA MAIOR QUE 7.0 " << endl; 
    
    return 0;
}