#include <iostream>
using namespace std;
int max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int c,n, a[102][102];
	cin >> c;
	while (c--)
	{
		if (cin >> n, n != 0)
		{
			for (int i = 1; i <= n;i++)
			{
				for (int j = 1; j <= i; j++)
				{
					cin >> a[i][j];
				}
			}

			for (int i = n; i >= 1;i--)
			{
				for (int j = 1; j < i;j++)
				{
					a[i - 1][j] = max((a[i - 1][j] + a[i][j]), (a[i - 1][j] + a[i][j + 1]));
					//cout << "a[" << i - 1 << "][" << j << "] = " << a[i - 1][j] << " ";
				}
				//cout << endl;
			}
			cout << a[1][1] << endl;
		}
	}
}
/*
#include<stdio.h> 
int max(int x,int y) 
{
	return x=x>y?x:y; 
}
int main() 
{ 
	int sum,i,j,a[101][101],c,n; 
	scanf("%d",&c); 
	while(c--) 
	{
		scanf("%d",&n); 
		for(i=0;i<n;i++) 
		{ 
			for(j=0;j<=i;j++) 
				scanf("%d",&a[i][j]); 
		} 
		for(i=n-1;i>0;i--) 
		{ 
			for(j=0;j<i;j++) 
			{
				a[i-1][j]=max(a[i][j]+a[i-1][j],a[i][j+1]+a[i-1][j]); 
			} 
		} 
		printf("%d\n",a[0][0]); 
	}
	return 0; 
}
*/