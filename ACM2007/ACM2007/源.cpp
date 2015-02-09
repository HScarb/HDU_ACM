#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int l, r, i, j, sum1, sum2;
	while (cin >> l >> r)
	{
		sum1 = 0;
		sum2 = 0;
		if (l > r)
		{
			j = l;
			l = r;
			r = j;
		}
		for (i = l; i <= r; i++)
		{
			if (i % 2 == 0)
				sum1 += i*i;
			else if (i % 2 == 1)
				sum2 += i*i*i;
		}
		cout << sum1 << " " << sum2 << endl;
	}
}