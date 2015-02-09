#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, flag, size, i,j, lei, sizec,a,b,c,d;
	string str;
	cin >> n;
	while (n--)
	{
		flag = 1;
		lei = 0;
		cin >> str;
		size = str.size();
		if (size < 8 || size >16)
			flag = 0;
		if (flag == 1)
		{
			a = b = c = d = 0;
			for (i = 0; i < size;i++)
			{
				if (str[i] >= '0' && str[i] <= '9')
					a = 1;
				else if (str[i] >= 'a' && str[i] <= 'z')
					b = 1;
				else if (str[i] >= 'A' && str[i] <= 'Z')
					c = 1;
				else
					d = 1;
			}
			if (a + b + c + d < 3)
				flag = 0;
		}
		if (flag == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}