#include<iostream>
using namespace std;
int main()
{
	int n, x, y, xsum, ysum, i;
	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		xsum = 0;
		ysum = 0;
		for (i = 1; i < x; i++)
		{
			if (x%i == 0)
				xsum += i;
		}
		for (i = 1; i < y; i++)
		{
			if (y%i == 0)
				ysum += i;
		}
		if (xsum == y&& ysum == x)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}