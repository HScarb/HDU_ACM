#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double f(double x)
{
	return 8 * pow(x, 4.0) + 7 * pow(x,3.0) + 2 * pow(x, 2.0) + 3 * x + 6;
}
int main()
{
	int t;
	double y;
	cin >> t;
	while (t--)
	{
		double l = 0, r = 100.0, m = 50.0;
		cin >> y;
		if (y<f(0)||y>f(100))
			cout << "No solution!" << endl;
		else
		{
			while (r - l>0.000001)	//*
			{
				if (f(m) == y)
				{
					cout << setprecision(4) << fixed << m << endl;
					break;
				}
				else if (f(m) > y)
				{
					r = m - 0.0000001;
					m = (l + r) / 2;
				}
				else
				{
					l = m + 0.0000001;
					m = (l + r) / 2;
				}
			}
			cout << setprecision(4) << fixed << m << endl;
		}
	}
}