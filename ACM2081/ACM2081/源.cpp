#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int n;
	cin >> n;
	while (n--)
	{
		cin >> s;
		cout << '6' + s.substr(6) << endl;
	}
}