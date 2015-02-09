#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int n, min, max, sum, num, a[101], flag;
	double v;
	while (cin >> n)
	{
		sum = 0;
		num = n;
		v = 0;
		min = 100;
		max = 0;
		flag = 0;
		while (n--)
		{
			cin >> a[n];
		}
		sort(a, a + num);
		for (int j = 1; j < num - 1; j++)
		{
			sum += a[j];
		}
		v = (double)sum / (double)(num - 2);
		cout << setprecision(2) << fixed << v << endl;
	}
}