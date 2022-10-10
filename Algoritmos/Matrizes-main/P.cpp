#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int a[10][7], pares=0, impares=0;
	for (int i = 0; i < 10; i++) {
		for (int e = 0; e < 7; e++) {
			a[i][e] = rand() % 105;
			if (a[i][e] % 2 == 0) {
				pares++;
			} else {
				impares++;
			}
		}
	}
	cout << " Existem " << pares << " elementos pares e " << impares << " elementos ímpares " << endl;
	cout << " Os elementos pares são " << (pares*100)/70 << "% do total \n";
	cout << " Os elementos ímpares são " << (impares*100)/70 << "% do total \n";
	return 0;
}