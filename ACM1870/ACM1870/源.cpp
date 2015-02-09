#include<iostream>
#include<string>
using namespace std;
int main()
{
	int l, r, i;
	string s;
	while (cin >> s)
	{
		r = l = 0;
		for (i = 0; s[i] != 'B'; i++)
		{
			if (s[i] == '(')
				l++;
			else
				r++;
		}
		cout << l - r << endl;
	}
}