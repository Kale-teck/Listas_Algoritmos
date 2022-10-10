#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int a[5][4], c=0, d=0;
	long int b[5][4];
	for (int r = 0; r < 5; r++) {
		for (int y = 0; y < 4; y++) {
			a[r][y] = rand() % 20;
		}
	}
	for (int g = 0; g < 5; g++) {
		for (int h = 0; h < 4; h++) {
			b[g][h] = 1;
			c = a[g][h];
			do {
				b[g][h] *= c;
				c--;
			} while (c > 0);
		}
	}
	while (d < 2) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 4; j++) {
				if (i==0 && j==0 && d==0) {
					cout << endl << "             MATRIZ A" << endl << endl;
				}
				if (d == 0) {
					cout << a[i][j] << "           ";	
				}
				if (i==0 && j==0 && d==1) {
					cout << endl << "            MATRIZ B fatorial de A" << endl << endl;
				}
				if (d == 1) {
					cout << b[i][j] << "        ";	
				}
			}
			cout << endl;
		}
		d++;
	}
	return 0;
}