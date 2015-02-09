#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	string a, b, c;
	int i;
	while (getline(cin, a))
	{
		if (a == "ENDOFINPUT")
			break;
		else if (a == "START")
		{
			getline(cin, b);
			getline(cin, c);
			if (c == "END")
			{
				for (i = 0; i < b.size(); i++)//*b.size()
				{
					
					if (b[i] < 70 && b[i] >= 65)
						b[i] = b[i] + 21;
					else if (b[i] >= 70 && b[i] <= 90)
						b[i] = b[i] - 5;
					cout << b[i];
				}
				cout << endl;
			}
		}
	}
}