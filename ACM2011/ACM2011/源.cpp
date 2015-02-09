#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, l, r, i, j;
	double sum;
	cin >> n;
	while (n--)
	{
		while (cin >> l >> r)
		{
			sum = 0;
			for (i = 1; i <= l; i++)
			{
				if (i % 2 == 0)
					sum -= 1.0 / i;
				else
					sum += 1.0 / i;
			}
			cout << setprecision(2) << fixed << sum << endl;
			sum = 0;
			for (i = 1; i <= r; i++)
			{
				if (i % 2 == 0)
					sum -= 1.0 / i;
				else
					sum += 1.0 / i;
			}
			cout << setprecision(2) << fixed << sum << endl;
		}
	}
}