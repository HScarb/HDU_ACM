#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[10001];
	int cnt = 0, sum = 0, flag;
	while (1)
	{
		sum = 0;
		while (cin >> s[cnt], s[cnt] != "#")
		{
			flag = 0;
			if (cnt > 0)
			{
				for (int i = 0; i < cnt; i++)
				{
					if (s[cnt] == s[i])
					{
						flag = 1;
					}
				}
			}
			if (flag == 0)
			{
				sum++;
			}
			cnt++;
		}
		cout << sum << endl;
	}
}