#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i, j[1000], l, r, ge, shi, bai, sum;
	char ch;
	bool flag;
	while (cin >> l >> r)
	{
		flag = 0;
		sum = 0;
		for (i = l; i <= r; i++)
		{
			ge = i % 10;
			shi = i / 10 % 10;
			bai = i / 100;
			if (i == ge*ge*ge + shi*shi*shi + bai*bai*bai)
			{
				j[sum] = i;
				sum++;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			for (int i = 0; i < sum; i++)
			{
				if (i != (sum - 1))
					cout << j[i] << " ";
				else
					cout << j[i];
			}
			cout << endl;
		}
		else
			cout << "no" << endl;
	}
}