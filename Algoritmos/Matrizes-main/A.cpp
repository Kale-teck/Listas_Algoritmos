#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int a[5][3], b[5][3], c[5][3];
	for (int t = 0; t < 5; t++) {
		for (int y = 0; y < 3; y++) {
			a[t][y] = rand()%50;
			b[t][y] = rand()%75;	
		}
	}
	for (int g = 0; g < 5; g++) {
		for (int h = 0; h < 3; h++) {
			c[g][h] = a[g][h] + b[g][h];
		}
	}
	for (int z = 0; z < 5; z++) {
		for (int s = 0; s < 3; s++) {
			cout << " vetor A = " << a[z][s];
			cout << " vetor B = " << b[z][s];
			cout << " vetor C = " << c[z][s] << endl;
		}
	}
	return 0;
}