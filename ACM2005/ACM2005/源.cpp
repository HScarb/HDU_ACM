#include<iostream>
#include<iomanip>
using namespace std;
int isleapyear(int i)
{
	if (i % 4 == 0 && i & 100 != 0 || i % 400 == 0)
		return 1;
	return 0;
}
int main()
{
	int days[12] = { 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int y, m, d, i, total;
	while (scanf("%d / %d / %d", &y, &m, &d) != EOF)
	{
		total = 0;
		if (isleapyear(y))
			days[1] = 29;
		else
			days[1] = 28;
		for (i = 1; i < m; i++)
		{
			total += days[i - 1];
		}
		total += d;
		cout << total << endl;
	}
}