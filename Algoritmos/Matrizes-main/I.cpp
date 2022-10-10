#include <iostream>
#include <stdlib.h>
using namespace std;
int soma(int k) {
  if (k > 0) {
    return k + soma(k - 1);
  } else {
    return 0;
  }
}
int main() {
	int a[7][7], x=0;
	long int b[7][7];

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			a[i][j] = rand() % 30;
		}
	}
	for (int q = 0; q < 7; q++) {
		for (int d = 0; d < 7; d++) {
			b[q][d] = soma(a[q][d]);
			if (q%2==0 && d%2==0 && q==d) {
				b[q][d] = 1;
				x = a[q][d];
				do {
					b[q][d] *= x;
					x--;
				} while (x > 0);
			}
		}
	}
	for (int q = 0; q < 7; q++) {
		for (int d = 0; d < 7; d++) {
			cout << b[q][d] << "      ";
		}
		cout << endl ;
	}
	return 0;
}