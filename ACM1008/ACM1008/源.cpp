#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, a;
	int nowfloor, time;
	while (cin >> n, n != 0)
	{
		nowfloor = 0;
		time = 0;
		while (n--)
		{
			cin >> a;
			if (a == nowfloor)
				time += 5;
			else if (a > nowfloor)
				time += (5 + (a - nowfloor) * 6);
			else if (a < nowfloor)
				time += (5 + (nowfloor - a) * 4);
			nowfloor = a;
		}
		cout << time << endl;
	}
}