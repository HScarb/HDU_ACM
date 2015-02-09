#include<iostream>
using namespace std;
int max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int t;
	
	cin >> t;
	while (t--)
	{
		int n, v, i, j;
		int value[1001], cost[1001],f[1001];
		cin >> n >> v;
		for (i = 0; i < n; i++)
			cin >> value[i];
		for (i = 0; i < n; i++)
			cin >> cost[i];
		for (i = 0; i < 1001; i++)
			f[i] = 0;
		for (i = 0; i < n; i++)
		{
			for (j = v; j >= cost[i];j--)
			{
				f[j] = max(f[j], f[j - cost[i]] + value[i]);
			}
		}
		cout << f[v] << endl;
	}
}