#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int m, n;
	double d, s;
	while (cin >> m >> n)
	{
		d = 0.0;
		s = (double)m;
		while (n--)
		{
			d += s;
			s = sqrt(s);
		}
		cout << setprecision(2) << fixed << d << endl;
	}
}