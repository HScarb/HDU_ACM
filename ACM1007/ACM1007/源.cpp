#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;
const int MAX = 100000;
struct point
{
	double x, y;
}arrX[MAX],arrY[MAX],arrP[MAX];
bool compx(point a, point b)
{
	if (a.x == b.x)
		return a.y < b.y;
	else
		return a.x < b.x;
}
bool compy(point a, point b)
{
	if (a.y == b.y)
		return a.x < b.x;
	else
		return a.y < b.y;
}
double min(double a, double b)
{
	if (a < b)
		return a;
	else
		return b;
}
double getdistance(point a, point b)
{
	return sqrt(pow(fabs(a.x - b.x), 2.0) + pow(fabs(a.y - b.y), 2.0));
}
double getmindistance(int l, int r)
{
	if (l == r)
		return 0.0;
	if (l + 1 == r)
		return getdistance(arrP[l], arrP[r]);
	if (l + 2 == r)
		return min(min(getdistance(arrP[l], arrP[r]), getdistance(arrP[l + 1], arrP[r])), getdistance(arrP[l], arrP[l + 1]));

	int middle = (l + r) / 2;
	int j = 0, k = 0;
	double mind = min(getdistance(arrP[l], arrP[middle]), getdistance(arrP[middle+1], arrP[r]));
	for (int i = l; i <= r; i++)
	{
		if (fabs(arrP[i].x - arrP[middle].x)<mind)
			arrX[j++] = arrP[i];
	}
	sort(arrX, arrX + j, compy);
	middle = (j + 1) / 2;
	
	for (int i = 0; i < j; i++)
	{
		if (fabs(arrX[i].y - arrX[middle].y)<mind)
			arrY[k++] = arrX[i];
	}
	for (int i = 0; i < k; i++)
	for (int u = i + 1; u < k; u++)
	{
		double tempdistance = getdistance(arrY[i], arrY[u]);
		if (tempdistance < mind)
			mind = tempdistance;
	}
	return mind;
}
int main()
{
	int n;
	while (cin >> n, n != 0)
	{
		point p;
		double minDistance;
		for (int i = 0; i<n; i++)
		{
			cin >> arrP[i].x >> arrP[i].y;
		}
		sort(arrP, arrP + n, compx);
		minDistance = getmindistance(0, n - 1);
		cout << setprecision(2) << fixed << minDistance / 2 << endl;
	}
	return 0;
}