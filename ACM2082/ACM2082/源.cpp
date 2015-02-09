#include<iostream>
using namespace std;
int c1[55], c2[55];
int main()
{
	int n, a[27] = { 0 }, i, j, k, sum;
	cin >> n;
	while (n--)
	{
		for (i = 1; i <= 26; i++)
			cin >> a[i];
		memset(c1, 0, sizeof(c1));
		memset(c2, 0, sizeof(c2));
		for (i = 0; i < 51 && i<a[1]; i++)
			c1[i] = 1;
		for (i = 2; i <= 26; i++)
		{
			for (j = 0; j < 51; j++)
			{
				for (k = 0; j + k < 51 && k <= a[i] * i; k += i)
					c2[k + j] += c1[j];
			}
			for (j = 0; j < 51; j++)
			{
				c1[j] = c2[j];
				c2[j] = 0;
			}
			sum = 0;
			for (i = 1; i <= 50; i++)
				sum += c1[i];
			cout << sum << endl;
		}
	}
}