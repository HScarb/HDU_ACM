#include <iostream>
using namespace std;
__int64 C(int n, int m)
{
	int i;
	__int64 s1 = 1, s2 = 1;
	for (i = 1; i <= m; i++)
	{
		s1 *= (n - i + 1);
		s2 *= i;
	}
	return s1 / s2;
}

int main()
{
	int c, m, n, i, j;
	long long a[22] = {0,0,1};
	for (i = 3; i < 21; i++)
	{
		a[i] = (i - 1)*(a[i - 1] + a[i - 2]);
	}
	cin >> c;
	while (c--)
	{
		cin >> n >> m;
		cout << a[m] * C(n, n - m) << endl;
	}
}