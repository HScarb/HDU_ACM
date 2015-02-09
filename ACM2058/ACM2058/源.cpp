#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, m, i, j;
	while (cin >> n >> m, n != 0 && m != 0)
	{
		for (j = sqrt(2.0*m); j > 0; j--)
		{
			i = (2 * m / j - j + 1) / 2;
			if (j*(j + 2 * i - 1) / 2 == m) printf("[%d,%d]\n", i, i + j - 1);
		}
		cout << endl;
	}
}