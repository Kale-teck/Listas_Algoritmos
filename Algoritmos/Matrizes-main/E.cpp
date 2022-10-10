#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int a[12], b[12], c[12][2];
	for (int i = 0; i < 12; i++) {
		a[i] = rand() % 20;
		b[i] = rand() % 30;
	}
	for (int j = 0; j < 2; j++) {
		for (int k = 0; k < 12; k++) {
			if (j==0) {
				c[k][j] = a[k] * 2;
			}
			if (j==1) {
				c[k][j] = b[k] - 5;
			}
		}
	}
	for (int w = 0; w < 12; w++) {
		cout << c[w][0] << "     " << c[w][1] << endl;
	}
	return 0;
}