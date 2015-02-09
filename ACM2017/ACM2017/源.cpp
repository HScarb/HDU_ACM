#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int n, sum;
	cin >> n;
	while (n--)
	{
		cin >> s;
		sum = 0;
		int ssize = s.size();
		for (int i = 0; i < ssize; i++)
		{
			if (isdigit(s[i]))
				sum++;
		}
		cout << sum << endl;
	}
}