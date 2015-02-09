#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, a[101], i, j, t, temp;
	while (cin >> n,n!=0)
	{
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - 1; j++)
			{
				if (abs(a[j]) < abs(a[j + 1]))
				{
					t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				cout << a[i] << " ";
			else
				cout << a[i];
		}
		cout << endl;
	}
}