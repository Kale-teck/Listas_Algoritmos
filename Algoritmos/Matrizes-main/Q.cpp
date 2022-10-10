#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int a[4][5], b[4], c[5], somal, somac=0;

	for (int i = 0; i < 4; i++) {
		somal=0;
		for (int e = 0; e < 5; e++) {
			a[i][e] = rand()%50;
			somal += a[i][e];
		}
		b[i] = somal;
	}
	for (int r = 0; r < 5; r++) {
		somac = 0;
		for (int f = 0; f < 4; f++) {
			somac += a[f][r];
		}
		c[r] = somac;
	}
	somac = 0;
	for (int f = 0; f < 5; f++) {
		if (f < 4) {
			somac += b[f]+c[f];
		} else {
			somac += c[f];
		}
	}
	cout << somac << endl;
	return 0;
}