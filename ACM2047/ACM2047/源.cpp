#include <iostream>
using namespace std;
int main()
{
	int n;
	long long a[40];
	a[1] = 3;
	a[2] = 8;
	for (int i = 3; i < 40; i++)
	{
		a[i] = a[i - 1] * 2 + a[i - 2] * 2;
	}
	while (cin >> n)
	{
		cout << a[n] << endl;
	}
}
