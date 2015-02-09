#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
struct p
{
	double x, y;
};
int main()
{
	p p1, p2;
	while (cin >> p1.x >> p1.y >> p2.x >> p2.y)
	{
		cout << setprecision(2) << fixed << sqrt(pow((p1.x - p2.x), 2.0) + pow((p1.y - p2.y), 2.0)) << endl;
	}
}