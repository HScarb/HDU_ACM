#include<iostream>
using namespace std;
int main()
{
	int n, m, a, s;
	cin >> n;
	while (n--)
	{
		cin >> m;
		s = 0;
		while (m--)
		{
			cin >> a;
			s += a;
		}
		if (n != 0)
			cout << s << "\n\n";
		else
			cout << s << "\n";
	}
}