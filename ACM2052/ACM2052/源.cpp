#include <iostream>
using namespace std;
int main()
{
	int h, s;
	while (cin >> h >> s)
	{
		cout << "+";
		for (int i = 0; i < h; i++)
			cout << "-";
		cout << "+";
		cout << endl;
		for (int i = 0; i < s;i++)
		{
			cout << "|";
			for (int j = 0; j < h; j++)
				cout << " ";
			cout << "|";
			cout << endl;
		}
		cout << "+";
		for (int i = 0; i < h; i++)
			cout << "-";
		cout << "+";
		cout << endl << endl;;
	}
}