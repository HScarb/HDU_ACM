#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int m, n, a[101], pos, i, j, flag;
	while (cin >> n >> m, m != 0 || n != 0)
	{
		flag = 0;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		a[i] = m;
		sort(a, a + i + 1);
		for (j = 0; j <= i; j++)
		{
			if (j != i )
				cout << a[j] << " ";
			else
				cout << a[j];
		}
		cout << endl;
	}
}