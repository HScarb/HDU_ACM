#include<iostream>
using namespace std;
int main()
{
	int n;
	double d;
	int m, z, p;
	while (cin >> n, n != 0)
	{
		m = z = p = 0;
		while (n--)
		{
			cin >> d;
			if (d < 0)
				m++;
			else if (d == 0)
				z++;
			else if (d>0)
				p++;
		}
		cout << m << " " << z << " " << p << endl;
	}

}