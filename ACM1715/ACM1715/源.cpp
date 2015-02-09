#include<iostream>
#include<iomanip>
using namespace std;
int f[1002][301];
int main()
{
	int t,i,j,pi,k;
	memset(f, 0, sizeof (f));
	cin >> t;
	//计算斐波那契数列并保存在一个二维数组里面
	//f[i][j]i表示第X个数，j表示这个数的弟j位的值
	f[1][0] = 1;
	f[2][0] = 1;
	for (i = 3; i < 1002; i++)
	{
		for (j = 0; j < 301; j++) //**Big number adder** important
		{
			f[i][j] += f[i - 2][j] + f[i - 1][j];
			if (f[i][j] >= 10)
			{
				f[i][j + 1] = f[i][j] / 10;
				f[i][j] = f[i][j] % 10;
			}
		}

	}
	for (k = 0; k < t; k++)
	{
		cin >> pi;
		int flag = 0;
		for (i = 300; i >= 0; i--) 
		{
			if (flag == 0 && f[pi][i] != 0) //第一位不是0的数开始
				flag = 1;
			if (flag)
				cout << f[pi][i];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}