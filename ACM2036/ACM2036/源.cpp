#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int n, i, j;
	double s, x[101], y[101];
	while (cin >> n, n != 0)
	{
		for (i = 0; i < n; i++)
		{
			cin >> x[i] >> y[i];
		}
		j = i;
		x[j] = x[0];
		y[j] = y[0];
		s = 0;
		//多边形面积计算
		for (i = 0; i < j; i++)
			s += x[i] * y[i + 1] - x[i + 1] * y[i];
		s = fabs(s / 2);
		cout << setprecision(1) << fixed << s << endl;;
	}
}