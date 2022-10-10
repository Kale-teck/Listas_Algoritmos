#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int a[10], c[10][3], x=0;
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 10;
	}
	for (int s = 0; s < 3; s++) {
		for (int r = 0; r < 10; r++) {
			if (s==0) { //coluna 1 recebe +5
				c[r][s] = a[r]+5;
			}
			if (s==1) { //coluna 2 recebe FATORIAL
				c[r][s] = 1;
				x = a[r];
				do {
      			c[r][s] *= x;
      			x--;
   			} while (x > 0);
			}
			if (s==2) { //coluna 3 recebe POTENCIA
				c[r][s] = a[r] * a[r];
			}
		}
	}
	for (int e = 0; e < 10; e++) {
		if (e==0) {
			cout << "COLUNA 01" << "        " << "COLUNA 02" << "          " << "COLUNA 03" << "       " << endl; 
		}
		cout << c[e][0] << "                 " << c[e][1] << "                   " << c[e][2] << "    " << endl;
	}
	return 0;
}