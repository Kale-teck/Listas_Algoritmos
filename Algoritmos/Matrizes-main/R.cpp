#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int a[4], b[4], c[4], d[4], e[4][4], x=0;
	for (int i = 0; i < 4; i++) {
		a[i] = rand() % 15;
		b[i] = rand() % 30;
		c[i] = rand() % 20;
		d[i] = rand() % 10;
	}
	for (int j = 0; j < 4; j++) {
		for (int k = 0; k < 4; k++) {
			if (j==0) {
				e[j][k] = a[k]*2;
			}
			if (j==1) {
				e[j][k] = b[k]*3;
			}
			if (j==2) {
				e[j][k] = c[k]*4;
			}
			if (j==3) {
				e[j][k] = 1;
				x = d[k];
				do {
					e[j][k] *= x;
					x--;
				} while (x > 0);
			}
		}
	}
	for (int l = 0; l < 4; l++) {
		for (int m = 0; m < 4; m++) {
			cout << e[l][m] << "        ";
		}
		cout << endl;
	}
	return 0;
}