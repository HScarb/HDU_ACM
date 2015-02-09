#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t, i, j, ssum[1002], max, k;
	string s[1002];

	while (cin >> t)
	{
		if (t != 0)
		{
			for (i = 0; i < t; i++)
			{
				ssum[i] = 0;
				cin >> s[i];
			}
			for (i = 0; i < t; i++)
			{
				for (j = 0; j < t; j++)
				{
					if (s[i] == s[j])
						ssum[i]++;
				}
			}
			max = 0;
			for (int i = 0; i < t; i++)
			{
				if (ssum[i]>max)
				{
					max = ssum[i];
					k = i;
				}
			}
			cout << s[k] << endl;
		}
	}
}