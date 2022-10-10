#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int  a[7][7], pares;
	for (int i = 0; i < 7; i++) {
		for (int z = 0; z < 7; z++) {
			a[i][z] = rand() % 50;
		}
	}
	for (int i = 0; i < 7; i++) {
		for (int z = 0; z < 7; z++) {
			if (a[i][z]%2 == 0) {
				pares++;
			}
		}
	}
	cout << pares << endl;
	return 0;
}