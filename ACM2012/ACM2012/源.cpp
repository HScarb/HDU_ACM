#include<iostream>
using namespace std;
int main()
{
	int x, y, i, j, a;
	int flag;
	while (cin >> x >> y, x != 0 || y != 0)
	{
		flag = 0;
		for (i = x; i <= y; i++)
		{
			a = i*i + i + 41;
			for (j = 2; j < a; j++)
			{
				if (a%j == 0)
					flag = 1;
			}
		}
		if (flag == 1)
			cout << "Sorry" << endl;
		else
			cout << "OK" << endl;
	}
}