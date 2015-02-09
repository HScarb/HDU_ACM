#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;
static const int MAXNUM = 100000;
struct Point
{
	double x, y;
}arrP[MAXNUM], arrX[MAXNUM], arrY[MAXNUM];

bool CompX(Point a, Point b)//比较x坐标，返回a.x是否小于b.x
{
	if (a.x == b.x)
		return a.y<b.y;
	return a.x<b.x;
}

bool CompY(Point a, Point b)//比较y坐标，返回b是否在a上面
{
	if (a.y == b.y)
		return a.x<b.x;
	return a.y<b.y;
}

double GetDistance(Point a, Point b)//返回两组点的间距
{
	return sqrt(pow(a.x - b.x, 2.0) + pow(a.y - b.y, 2.0));
}

double MinDistance(double a, double b)//返回一个较小值
{
	return a <= b ? a : b;
}

double GetMinDistance(int l, int r)//找到从l点到r点之间点的最小间距
{
	if (l == r)   //only one point
		return 0;
	else if (l + 1 == r)  //only two points
		return GetDistance(arrP[l], arrP[r]);
	else if (l + 2 == r)  //only three points
	{
		double tmp1 = GetDistance(arrP[l], arrP[l + 1]);
		double tmp2 = GetDistance(arrP[l], arrP[r]);
		double tmp3 = GetDistance(arrP[l + 1], arrP[r]);
		return MinDistance(MinDistance(tmp1, tmp2), tmp3);
	}

	int middle = (l + r) / 2, j = 0, k = 0;
	double minDistance = MinDistance(GetMinDistance(l, middle), GetMinDistance(middle + 1, r));
	for (int i = l; i <= r; i++)
	{
		if (fabs(arrP[i].x - arrP[middle].x)<minDistance)
			arrX[j++] = arrP[i];
	}
	sort(arrX, arrX + j, CompY);
	middle = (j + 1) / 2;
	for (int i = 0; i<j; i++)
	{
		if (fabs(arrX[i].y - arrX[middle].y)<minDistance)
			arrY[k++] = arrX[i];
	}
	for (int i = 0; i<k; i++)
		for (int j = i + 1; j<k; j++)
		{
			double tmpDistance = GetDistance(arrY[i], arrY[j]);
			if (tmpDistance<minDistance)
				minDistance = tmpDistance;
		}
	return minDistance;
}

int main()
{
	int n;
	while (cin >> n,n != 0)
	{
		Point p;
		double minDistance;
		for (int i = 0; i<n; i++)
		{
			cin >> arrP[i].x >> arrP[i].y;
		}
		sort(arrP, arrP + n, CompX);
		minDistance = GetMinDistance(0, n - 1);
		cout << setprecision(2) << fixed << minDistance / 2 << endl;
	}
	return 0;
}