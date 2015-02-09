#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int t;
	string s1, s2;
	int v1[1002] = { 0 }, v2[1002] = { 0 };
	int q,jin = 0;
	int len1, len2;
	int lenmax;
	int sum[1002];
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int v1[1002] = { 0 }, v2[1002] = { 0 };
		cin >> s1 >> s2;
		len1 = s1.size();//*important* to receive the length of string
		len2 = s2.size();
		for (int j = (len1 - 1); j >= 0; j--)
			v1[len1 - 1 - j] = s1[j] - '0';
		for (int j = (len2 - 1); j >= 0; j--)
			v2[len2 - 1 - j] = s2[j] - '0';
		//calculation
		lenmax = max(len1, len2);
		q = 0;
		jin = 0;
		while (q<lenmax)
		{
			sum[q] = (v1[q] + v2[q] + jin) % 10;
			jin = (v1[q] + v2[q] + jin) / 10;
			q++;
		}
		if (jin != 0)
		{
			sum[q] = jin;
			jin = 0;
			lenmax++;
		}
		//output
		cout << "Case " << (i + 1) << ":\n";
		cout << s1 << " + " << s2 << " = ";
		for (int j = (lenmax-1); j >=0; j--)
		{
			cout << sum[j];
		}
		cout <<"\n";
		if (i < (t-1))
			cout << "\n";
	}
	//system("pause");
	return 0;
}


