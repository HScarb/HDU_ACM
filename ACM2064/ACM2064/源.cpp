
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
#define LL long long
LL f[100];
int main()
{
	int n;
	f[1] = 2;
	for (int i = 2; i <= 35; i++)
	{
		f[i] = 3 * f[i - 1] + 2;
	}
	while (cin >> n)
	{
		cout << f[n] << endl;
	}
	return 0;
}