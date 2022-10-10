#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int a[7], b[7], c[7][2]; 
	for (int i = 0; i < 7; i++)
	{
		a[i] = rand() % 20; //atribue valores aleatórios
		b[i] = rand() % 15; //atribue valores aleatórios 
	}
	for (int l = 0; l < 2; l++) { //for que percorre a coluna
		for (int x = 0; x < 7; x++) { //for das linhas
			if (l==0) { //se l corresponde a 1 coluna
				c[x][l] = a[x]; // a 1 coluna de C recebe vetor A
			}
			if (l==1) { // se l corresponde a 2 coluna
				c[x][l] = b[x]; // a 2 coluna de C recebe vetor B
			}
		}
	}
	for (int s = 0; s < 7; s++) {
		for (int w = 0; w < 2; w++) {
			cout << c[s][w] << "  "; //inprime C
			if (w==1) {
				cout << endl; // para dar aspecto de coluna
			}
		}
	}
	return 0;
}
