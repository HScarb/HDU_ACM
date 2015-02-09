#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double fd(double x)
{
	return 42 * pow(x, 6.0) + 48 * pow(x, 5.0) + 21 * pow(x, 2.0) + 10 * x;
}
double f(double x,double y)
{
	return 6 * pow(x, 7.0) + 8 * pow(x, 6.0) + 7 * pow(x, 3.0) + 5 * pow(x, 2.0) - y*x;
}
int main()
{
	int t;
	double l, r, m;
	double y, min;
	cin >> t;
	while (t--)
	{
		l = 0, r = 100.0, m = 50.0;
		cin >> y;
		while (abs(fd(m) - y) > 0.00001)
		{
			//cout << setprecision(4) << fixed << abs(fd(m) - y) << endl;
			//cout << "m =" << m << endl;
			//system("pause");
			if (fd(m) == y)
			{
				break;
			}
			else if (fd(m) > y)
			{
				r = m - 0.0000001;
				m = (r + l) / 2;
			}
			else
			{
				l = m + 0.0000001;
				m = (r + l) / 2;
			}
		}
		cout << setprecision(4) << fixed << f(m,y) << endl;
	}
}