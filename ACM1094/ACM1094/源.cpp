#include<iostream>
using namespace std;
int main()
{
	int n, a, s;
	while (cin >> n)
	{
		s = 0;
		while (n--)
		{
			cin >> a;
			s += a;
		}
		cout << s << endl;
	}
}