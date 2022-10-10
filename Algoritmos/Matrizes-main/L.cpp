#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int a[15][15], soma=0;
		for (int i = 0; i < 15; i++) {
			for (int e = 0; e < 15; e++) {
				a[i][e] = rand() % 150;
				if (i==e && (a[i][e])%2==0) {
					soma += a[i][e];
				}
			}
		}
		cout << soma << endl;
	return 0;
}