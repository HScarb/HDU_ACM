#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int cal(int n)
{
	int temp;
	if (n % 2 == 1)
	{
		temp = 4 * pow(2, (n / 2)) - 3;
	}
	else
		temp = 6 * pow(2, (n / 2 - 1)) - 3;
	return temp;
}
int main()
{
	int n,t[100], i;
	while (cin >> n)
	{
		for (i = 1; i <= n; i++)
		{
			t[i - 1] = 2 * cal(n - i) + pow(2, i) - 1;
			cout << t[i-1] << endl;
		}
		sort(t, t + n);
		cout << t[0] << endl;
	}
}