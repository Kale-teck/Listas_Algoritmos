#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cout << "digite um número : ";
    cin >> a;
    cout << "digite outro : ";
    cin >> b;
    cout << "Mais outro : ";
    cin >> c;
    cout << " e mais outro : ";
    cin >> d;
    
    	if (a%2==0 && a%3==0) 
    	{
    	cout << a << endl;
    	}
    	if (b%2==0 && b%3==0)
    	{
    	cout << b << endl;
    	}
    	if (c%2==0 && c%3==0)
    	{
    	cout << c << endl;
    	}
        if (d%2==0 && d%3==0)
        {
            cout << d << endl;
        }
        
    return 0;
}