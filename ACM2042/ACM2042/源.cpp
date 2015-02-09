#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		int x = 3, sum;
		cin >> a;
		for (int i = 1; i <= a; i++)
		{
			x = (x - 1) * 2;
		}
		cout << x << endl;
	}
}