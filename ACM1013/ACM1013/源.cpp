#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int a, b, s, i, ss;
	while (cin >> str, str != "0")
	{
		s = 0;
		for (i = 0; i < str.size(); i++)
		{
			s += (str[i] - 48);
		}
		if (s < 10)
		{
			cout << s << endl;
		}
		else
		{
			while (s >= 10)
			{
				ss = s;
				s = 0;
				while (ss != 0)
				{
					s += ss % 10;
					ss /= 10;
				}
			}
			cout << s << endl;
		}
	}
}