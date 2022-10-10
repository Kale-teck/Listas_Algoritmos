#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	float a[5][5], soma=0;
	for (int i = 0; i < 5; i++) {
		for (int e = 0; e < 5; e++) {
			a[i][e] = rand()%50;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int e = 0; e < 5; e++) {
			if (i==e && (i,e == 0 || i,e % 2 == 0)) {
				soma += a[i][e];
			}
		}
	}
	cout << soma << endl;
	return 0;
}