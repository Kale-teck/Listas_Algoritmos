#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int a[5][5], b[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a[i][j] = rand() % 50;
		}
	}
	for (int e = 0; e < 5; e++) {
		for (int h = 0; h < 5; h++) {
			if (e != h)  {
				b[e][h] = a[e][h] * 2;
			}
			if (e == h) {
				b[e][h] = a[e][h] * 3;
			}
		}
	}
	for (int t = 0; t < 5; t++) {
		for (int n = 0; n < 5; n++) {
			if (b[t][n] > 99) {
				cout << b[t][n] << "       ";
			} else {
			cout << b[t][n] << "        ";
			}
		}
		cout << endl;
	}
	return 0;
}