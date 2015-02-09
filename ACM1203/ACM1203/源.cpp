#include<iostream>
#include<iomanip>
using namespace std;
double min(double a, double b){ return a > b ? b : a; }
int main()
{
	int n, m, a[10002], i = 0, j = 0;
	double b[10002], c[10002], d[10002];
	while (cin >> n >> m, n != 0 || m != 0)
	{
		for (i = 0; i < m; i++)
			cin >> a[i] >> b[i];
		for (i = 0; i <= n; i++)
		{
			c[i] = 1.0;
			d[i] = 1.0;
		}
		for (i = 0; i < m; i++)
		{
			for (j = n; j >= a[i]; j--)
			{
				d[j] = min(d[j], d[j - a[i]] * (1.0 - b[i]));
			}
		}
		cout << setprecision(1) << fixed << (1 - d[n]) * 100 << "%" << endl;
	}
}