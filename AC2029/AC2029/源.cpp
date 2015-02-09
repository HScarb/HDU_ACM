#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, i, j, size, flag;
	string s;
	while (cin >> n)
	{
		while (n--)
		{
			cin >> s;
			flag = 1;
			size = s.size();
			for (i = 0; i < (size / 2); i++)
			{
				if (s[i] != s[size - i-1])
					flag = 0;
			}
			if (flag == 1)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
	}
}