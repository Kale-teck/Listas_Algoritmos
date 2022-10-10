#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int a[5][6], b[5][6], c[5][6], x=0;
	cout << "\n Digite até que a matriz A esteja cheia : \n";
	for (int i = 0; i < 5; i++) {
		for (int e = 0; e < 6; e++) {
			do {
				cin >> x;
			} while (x%2!=0);
				a[i][e] = x;
		}
	}
	cout << "\n Digite até que a matriz B esteja cheia : \n";
	for (int q = 0; q < 5; q++) {
		for (int p = 0; p < 6; p++) {
         x=0;
			do {
				cin >> x;
			} while (x%2==0);
				b[q][p] = x;
		}
	}
	for (int n = 0; n < 5; n++) {
		for (int m = 0; m < 6; m++) {
			c[n][m] = a[n][m] + b[n][m];
		}
	}
	for (int q = 0; q < 5; q++) {
		for (int p = 0; p < 6; p++) {
			cout << c[q][p] << "         ";
		}
		cout << endl;
	}
	return 0;
}