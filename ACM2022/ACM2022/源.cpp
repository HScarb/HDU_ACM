#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m, n, hang, lie, a[100][100], i, j, max;
	while (cin >> m >> n)
	{
		for (i = 0; i < m;i++)
		{
			for (j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		max = 0;
		hang = 0;
		lie = 0;
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (abs(a[i][j])>abs(max))
				{
					max = a[i][j];
					hang = i;
					lie = j;
				}
			}
		}
		cout << hang + 1 << " " << lie + 1 << " " << max << endl;
	}
}