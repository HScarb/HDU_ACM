#include<iostream>
using namespace std;

int main()
{
	int n, ah, am, as, bh, bm, bs, ch, cm, cs;
	cin >> n;
	while (n--)
	{
		cin >> ah >> am >> as >> bh >> bm >> bs;
		cs = 0;
		cm = 0;
		ch = 0;
		if ((as + bs) >= 60)
		{
			cs = (as + bs) % 60;
			cm++;
		}
		else
		{
			cs = (as + bs);
		}

		if ((cm + bm + am) >= 60)
		{
			cm = (cm + bm + am) % 60;
			ch++;
		}
		else
		{
			cm = (cm + bm + am);
		}
		ch = ch + bh + ah;

		cout << ch << " " << cm << " " << cs << endl;
	}
}