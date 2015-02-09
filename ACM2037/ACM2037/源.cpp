#include<iostream>
using namespace std;
struct t
{
	int s;
	int e;
};
int main()
{
	int n, i, j, count, b;
	t tv[101], temp, x, y;
	while (cin >> n, n != 0)
	{
		count = 0;
		//input
		for (i = 0; i < n; i++)
		{
			cin >> tv[i].s >> tv[i].e;
		}
		//sort
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				if (tv[j + 1].e < tv[j].e)
				{
					temp = tv[j + 1];
					tv[j + 1] = tv[j];
					tv[j] = temp;
				}
			}
		}
		//cal
		count++;
		b = 1;
		x = tv[0];
		y = tv[1];
		for (i = 1; i < n; i++)
		{
			if (x.e <= y.s)
			{
				count++;
				x = y;
				b++;
				y = tv[b];
			}
			else
			{
				b++;
				y = tv[b];
			}
		}
		cout << count << endl;
	}
}