#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
	char ch[3];
	while (cin >> ch)
	{
		sort(ch, ch + 3);
		for (int i = 0; i < 3; i++)
		{
			cout << ch[i];
			if (i < 2)
				cout << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
