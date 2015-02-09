#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d[5], flag, i;
	while (cin >> a, a != 0)
	{
		flag = 1;
		b = a;
		i = 0;
		memset(d, 0, sizeof(d));
		while (b != 0)
		{
			d[i] = b % 10;
			b /= 10;
			i++;
		}
		if (d[0] + d[1] + d[2] + d[3] == 22)
			;
		else
			flag = 0;
		if (flag == 1)
		{

			b = a;
			i = 0;
			memset(d, 0, sizeof(d));
			while (b != 0)
			{
				d[i] = b % 16;
				b /= 16;
				i++;
			}
			if (d[0] + d[1] + d[2] + d[3] != 22)
				flag = 0;
		}
		if (flag == 1)
		{
			b = a;
			i = 0;
			memset(d, 0, sizeof(d));
			while (b != 0)
			{
				d[i] = b % 12;
				b /= 12;
				i++;
			}
			if (d[0] + d[1] + d[2] + d[3] != 22)
				flag = 0;
		}
		if (flag == 1)
			cout << a << " is a Sky Number.\n";
		else
			cout << a << " is not a Sky Number.\n";
	}
}