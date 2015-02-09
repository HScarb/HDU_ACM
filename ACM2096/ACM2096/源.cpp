#include <iostream>
using namespace std;
int main()
{
	int t, a, b, c;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		a = a % 100;
		b = b % 100;
		c = a + b;
		c = c % 100;
		cout << c << endl;
	}
}