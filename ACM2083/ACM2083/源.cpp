#include <iostream>
#include <algorithm> 
using namespace std;
int main()
{
	int m, n, a[10002], i, sum;
	cin >> m;
	while (m--)
	{
		cin >> n;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		sum = 0;
		for (i = 0; i < n; i++)
			sum += abs(a[i] - a[n / 2]);
		cout << sum << endl;
	}
}