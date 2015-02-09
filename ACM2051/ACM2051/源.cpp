#include <iostream>
using namespace std;
int main()
{
	int n,cnt,a[100000];
	while (cin >> n)
	{
		cnt = 0;
		while (n != 0)
		{
			a[cnt++] = n % 2;
			n /= 2;
		}
		for (int i = cnt - 1; i >= 0; i--)
			cout << a[i];
		cout << endl;
	}
}