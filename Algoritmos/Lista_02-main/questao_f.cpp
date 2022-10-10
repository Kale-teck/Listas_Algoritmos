#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "digite um número : ";
    cin >> a;
    cout << "digite outro : ";
    cin >> b;
    cout << "Mais outro : ";
    cin >> c;
    
    for (int contr = 0; contr <1000000 && contr >= 0; contr++)
    {
    	if (contr == a) 
    	{
    	cout << a << endl;
    	}
    	if (contr == b)
    	{
    	cout << b << endl;
    	}
    	if (contr == c)
    	{
    	cout << c << endl;
    	}
    } 
    return 0;
}