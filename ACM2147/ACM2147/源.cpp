#include<iostream>
using namespace std;
int main()
{
	int m, n;
	while (cin >> n >> m, m != 0 && n != 0)
	{
		if (m % 2 == 0 || n % 2 == 0)
			cout << "Wonderful!\n";
		else
			cout << "What a pity!\n";
	}
}