#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int c, n;
	long long s, f[25];
	f[1] = 0;
	f[2] = 1;
	for (int i = 3; i < 25; i++)
		f[i] = (i - 1)*f[i - 1] + (i - 1)*f[i - 2];
	cin >> c;
	while (c--)
	{
		s = 1;
		cin >> n;
		for (int i = 1; i <= n; i++)
			s *= i;
		cout << setprecision(2) << fixed << (double)100 * f[n] / s << "%" << endl;
	}
}