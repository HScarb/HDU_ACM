#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define PI 3.1415927
int main()
{
	double r;
	while (cin >> r)
	{
		cout << setprecision(3) << fixed << 4.0 / 3.0 * PI *pow(r, 3.0) << endl;
	}
}