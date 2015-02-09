#include<iostream>
using namespace std;
int dp[41];
void f()
{
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= 40; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
}
int main()
{
	int n, a;
	cin >> n;
	f();
	while (n--)
	{
		cin >> a;
		cout << dp[a-1] << endl;
	}
}