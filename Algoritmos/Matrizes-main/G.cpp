#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	float a[4][5], b[4][5], g=0;
	for (int i = 0; i < 4; i++) {
		for (int z = 0; z < 5; z++) {
			a[i][z] = rand() % 100;
		}
	}
	for (int e = 0; e < 4; e++) {
		for (int x = 0; x < 5; x++) {
			b[e][x] = (a[e][x] * 9/5) + 32;
		}
	}
	while (g < 2) {
		for (int u = 0; u < 4; u++) {
			for (int y = 0; y < 5; y++) {
				if (g==0) {
					cout << a[u][y] << "C         ";
				}
				if (g==1) {
					cout << b[u][y] << "F         ";
				}
			}
				cout << endl;
		}
			g++;
	}
	return 0;
}