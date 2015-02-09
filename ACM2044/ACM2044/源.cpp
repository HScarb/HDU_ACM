#include<iostream>
using namespace std;
int main()
{
	int n, a, b;
	long long c[100];
	c[1] = 1;
	c[2] = 2;
	for (int i = 3; i < 50; i++)
	{
		c[i] = c[i - 1] + c[i - 2];
	}
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		cout << c[b - a] << endl;
	}
}