#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	float a[8][6], b[8], soma=0;
	for (int i = 0; i < 8; i++) {
		for (int e = 0; e < 6; e++) {
			a[i][e] = rand()%100;
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int e = 0; e < 6; e++) {
			b[i] += a[i][e];
		}
		soma += b[i];
	}
	cout << soma << endl;
	return 0;
}