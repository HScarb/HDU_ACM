#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, sum, i,m;
	while (cin >> n)
	{
		sum = 1;
		for (i = 0; i < n; i++)
		{
			cin >> m;
			if (m % 2 == 1)
				sum*=m;
		}
		cout << sum << endl;
	}

}