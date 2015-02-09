#include <iostream>
#include <iomanip>
using namespace std;
int a, b;
int f(int n)
{
	if (n == 1 || n == 2) return 1;
	else return (a*f(n - 1) + b*f(n - 2)) % 7;
}
int main()
{
	int n, m;
	while (cin >> a >> b >> n)
	{
		if (a == 0 && b == 0 && n == 0)
			;
		else
		{
			m = n % 49;
			cout << f(m) << endl;
		}
	}
	system("pause");
	return 0;
}
