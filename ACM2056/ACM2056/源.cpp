#include <iostream>
using namespace std;
int main()
{
	double x1, x2, x3, x4, y1, y2, y3, y4, x5, y5, x6, y6;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
	{
		if (x1 > x2)
			swap(x1, x2);
		if (y1 > y2)
			swap(y1, y2);
		if (x3 > x4)
			swap(x3, x4);
		if (y3 > y4)
			swap(y3, y4);

		if (x2 <= x3 || y2 <= y3 || y1 >= y4 || x1 >= x4)
			cout << "0.00" << endl;
		else
		{
			if (x1 < x3)
				x5 = x3;
			else
				x5 = x1;
			if (y1>y3)
				y5 = y1;
			else
				y5 = y3;
			if (x2<x4)
				x6 = x2;
			else
				x6 = x4;
			if (y2>y4)
				y6 = y4;
			else
				y6 = y2;
			cout.precision(2);
			cout << fixed << (y6 - y5)*(x6 - x5) << endl;
		}
	}
}