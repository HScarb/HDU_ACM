#include<iostream>
using namespace std;
int main()
{
	int n, t, a, s;
	cin >> n;
	while (n--)
	{
		cin >> t;
		s = 0;
		while (t--)
		{
			cin >> a;
			s += a;
		}
		cout << s << endl;
	}
}