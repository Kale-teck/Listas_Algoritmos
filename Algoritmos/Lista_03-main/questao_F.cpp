#include <iostream>
using namespace std;

int main() {
	// todos os números divisiveis por 4 e menores que 200
	int c = 1;
	while (c<200)
	{
	if (c%4==0)
	{
	cout << c << " ";
	}
	c = c+1;
	}
	cout << endl;
	return 0;
}
