#include<iostream>
using namespace std;
int main()
{
	int n, s, b;
	while (cin >> n)
	{
		s = 0;
		b = 2;
		n--;
		while (n--)
		{
			s += b + 1;
			b = b * 2 + 1;
		}
		cout << s + 1 << endl;
	}
}