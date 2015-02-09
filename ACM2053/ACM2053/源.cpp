#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	double s;
	while (cin >> n)
	{
		s = sqrt(n*1.0);
		if (s == (int)s)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
}