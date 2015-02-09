#include<iostream>
#include<cmath>
using namespace std;
int c(int m)
{
	int z = 0;
	int a[6] = { 100, 50, 10, 5, 2, 1 };
	int t;
	for (int i = 0; i < 6; i++)
	{
		if (m / a[i] != 0)
		{
			z += m / a[i];
			m %= a[i];
		}
	}
	return z;
}
int main()
{
	int n, a, sum;
	while (cin >> n, n != 0)
	{
		sum = 0;
		while (n--)
		{
			cin >> a;
			sum += c(a);
		}
		cout << sum << endl;
	}
}