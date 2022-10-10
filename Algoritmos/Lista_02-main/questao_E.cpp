#include <iostream>
#include <cmath>
using namespace std;
int main() 
    {
        int a,b,c,delta;
        cout << " Considerando a fórmula de Bhaskara, vamos calcular o valor de Delta : " << "\n";
        cout << " Insira um valor para A :";
        cin >> a;
        cout << " Insira um valor para B :";
        cin >> b;
        cout << " Insira um valor para C :";
        cin >> c;

        delta = pow(b,2)-4*a*c;
        
        if (delta > 0) {
            cout << " O valor de Delta foi maior que zero : " << delta 
            << " Há solução real para a equação ! " << endl;
        } else {
            if (delta = 0)
            {
               cout << " O valor de Delta foi igual a zero : " << delta 
               << " Há solução real para a equação ! " << endl; 
                
            } else {
                cout << " O valor de Delta foi menor que zero : " << delta 
                << " Há solução real para a equação ! " << endl;
            }      
        }
        return 0;
        }