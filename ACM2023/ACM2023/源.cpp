#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int renshu, ke, a[50][5], i, j, sum, xueba, flag;
	double var, fen[5];
	while (cin >> renshu >> ke)
	{
		xueba = 0;
		for (i = 0; i < renshu; i++)
		{
			for (j = 0; j < ke; j++)
			{
				cin >> a[i][j];
			}
		}
		//学生个人平均成绩
		for (i = 0; i < renshu; i++)
		{
			sum = 0;
			for (j = 0; j < ke; j++)
			{
				sum += a[i][j];
			}
			if (i != renshu - 1)
			{
				var = (double)sum / (double)ke;
				cout << setprecision(2) << fixed << var << " ";
			}
			else
			{
				var = (double)sum / (double)ke;
				cout << setprecision(2) << fixed << var << endl;
			}
		}
		//每科平均成绩
		for (i = 0; i < ke; i++)
		{
			sum = 0;
			for (j = 0; j < renshu; j++)
			{
				sum += a[j][i];
			}
			fen[i] = (double)sum / (double)renshu;
			if (i != ke - 1)
			{
				var = (double)sum / (double)renshu;
				cout << setprecision(2) << fixed << var << " ";
			}
			else
			{
				var = (double)sum / (double)renshu;
				cout << setprecision(2) << fixed << var << endl;
			}
		}
		//各科成绩均大于平均成绩的学生数量
		for (i = 0; i < renshu; i++)
		{
			flag = 1;
			for (j = 0; j < ke; j++)
			{
				if (a[i][j] < fen[j])
					flag = 0;
			}
			if (flag == 1)
				xueba++;
		}
		cout << xueba << "\n" << endl;
	}
}