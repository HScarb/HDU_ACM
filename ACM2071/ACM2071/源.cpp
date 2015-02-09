#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
	int t, n, i;
	double a[102];
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		cout << setprecision(2) << fixed << a[n - 1] << endl;
	}
}