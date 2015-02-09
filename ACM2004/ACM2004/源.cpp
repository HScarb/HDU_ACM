#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double a;
	while (cin >> a)
	{
		cout << setprecision(2) << fixed << fabs(a) << endl;
	}
}