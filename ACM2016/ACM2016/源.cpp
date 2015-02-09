#include<iostream>
using namespace std;
int main()
{
	int a[101], min, i, n, mini, temp;
	i = 0;
	while (cin >> n, n != 0)
	{
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		min = a[0];
		mini = 0;
		for (i = 1; i < n; i++)
		{
			if (a[i] < min)
			{
				min = a[i];
				mini = i;
			}
		}
		if (mini != 0)
		{
			temp = a[0];
			a[0] = a[mini];
			a[mini] = temp;
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