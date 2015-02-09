#include<iostream>
using namespace std;
char s[] = "0123456789ABCDEF";//**
int main()
{
	int n, r, temp, a, i, j, min;//n整数 r进制
	char b[10000];
	while (cin >> n >> r)
	{
		min = 0;
		if (n < 0)
		{
			min = 1;
			n = (-1) * n;
		}
		
		i = 0;
		temp = n;
		while (temp >= r)
		{
			a = temp % r;
			temp /= r;
			b[i] = s[a];
			i++;
		}
		b[i] = s[temp];
		if (min)
			cout << '-';
		for (j=i; j >= 0; j--)
			cout << b[j];
		cout << endl;
	}
}