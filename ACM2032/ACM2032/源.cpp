//´òÓ¡N½×Ñî»ÔÈı½Ç
#include<iostream>
#include<iomanip>
using namespace std;
//build funciton

void build(int n)
{
	int a[100][100] = { 0 };
	int i, j, k;
	a[1][1] = 1;
	for (i = 2; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << a[i][j];
			if (j != i)
				cout << " ";
		}
		cout << endl;
	}
	cout << endl;
}
int main()
{
	int n;
	while (cin >> n)
	{
		build(n);
	}
}