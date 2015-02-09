#include<iostream>
using namespace std;
int main()
{
	int m, n, a, b, i, yu, shang;
	while (cin >> m >> n)
	{
		a = 2;
		yu = m%n;
		shang = m / n;
		while (shang--)
		{
			b = 0;
			for (i = 0; i < n; i++)
			{
				b += a;
				a += 2;
			}
			//cout << "shang = " << shang << endl;
			if (shang != 0)
				cout << b / n << " ";
			else
			{
				if (yu != 0)
					cout << b / n << " ";
				else
					cout << b / n;
			};
		}
		b = 0;
		if (yu != 0)
		{
			for (i = 0; i < yu; i++)
			{
				b += a;
				a += 2;
			}
			cout << b / yu ;
		}
		cout << "\n";
	}
}