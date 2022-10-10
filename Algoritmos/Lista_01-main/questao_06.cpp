#include <iostream>
using namespace std;
    int main() {
        int volume;
        float comprimento, largura, altura;
        cout << "Agora vou calcular o volume de uma\ncaixa retangular, mas preciso que digite os valores...\n";
        cout << "Qual a altura da sua caixa? ";
        cin >> altura;
        cout << "E qual a largura da sua caixa? ";
        cin >> largura;
        cout << "Por último, informe o comprimento da sua caixa? ";
        cin >> comprimento;
        volume = comprimento * largura * altura;
        cout << "O volume da sua caixa é " << volume << "\n";
        return 0;
    }