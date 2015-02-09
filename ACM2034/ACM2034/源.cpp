#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, m, i, j, k, t, flag;
	int a[102], b[102], c[100];
	while (cin >> n >> m, n != 0 || m != 0)
	{
		t = 0;
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0; i < m; i++)
			cin >> b[i];

		sort(a, a + n);
		sort(b, b + n);

		for (i = 0; i < n; i++)
		{
			flag = 1;
			for (j = 0; j < m; j++)
			{
				if (a[i] == b[j])
				{
					flag = 0;
				}
			}
			if (flag == 1)
			{
				t++;
				c[t] = a[i];
			}
		}
		if (t == 0)
			cout << "NULL";
		else
		{
			for (k = 1; k <= t; k++)
				cout << c[k] << " ";
		}
		cout << endl;
	}
}
