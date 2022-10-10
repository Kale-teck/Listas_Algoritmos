#include <iostream>
#include <string>
using namespace std;
int main() {
	string vet[4][5];

	for (int i = 0; i < 4; i++) {
		for (int f = 0; f < 5; f++) {
			cout << "Digite algo ";
			cin >> vet[i][f];
		}
	}
	for (int a = 0; a < 4; a++) {
		cout << endl;
		for (int b = 0; b < 5; b++) {
			cout << vet[a][b] << "  ";
		}
	}
	return 0;
}