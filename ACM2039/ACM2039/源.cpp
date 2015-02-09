#include<iostream>
using namespace std;
int main()
{
	int n, flag;
	double a, b, c;
	cin >> n;
	while (n--)
	{
		flag = 1;
		cin >> a >> b >> c;
		if (a + b > c && a + c > b & b + c > a)
			;
		else
			flag = 0;
		if (flag == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}