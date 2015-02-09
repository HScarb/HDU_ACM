#include<iostream>
using namespace std;
int main()
{
	int sum, max, start, end, i, j, t, n, a, z;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> n;
		for (z = start = sum = end = 0 , max = -10001, j = 0; j < n; j++)
		{
			cin >> a;
			sum += a;
			if (max < sum)
			{
				end = j;
				start = z;
				max = sum;
			}
			if (sum < 0)
			{
				z = j + 1;
				sum = 0;
			}
		}
		cout << "Case " << i + 1 << ":\n" << max << " " << start + 1 << " " << end + 1 << endl;
		if (i < t - 1)
			cout << endl;
	}
}