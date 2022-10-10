#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int a[6][5], b[6][5];
	for (int i = 0; i < 6; i++) {
		for (int p = 0; p < 5; p++) {
			a[i][p] = rand() % 30;
		}
	}
	for (int i = 0; i < 6; i++) {
		for (int p = 0; p < 5; p++) {
			if (a[i][p] == 1 || a[i][p]%2!=0) {
				b[i][p] = a[i][p] + 5;
			} else {
				b[i][p] = a[i][p] - 4;
			}
		}
	}
	for (int i = 0; i < 6; i++) {
		for (int p = 0; p < 5; p++) {
			cout << a[i][p] << '|' << b[i][p] << "        "; 
		}
		cout << endl;
	}
	return 0;
}