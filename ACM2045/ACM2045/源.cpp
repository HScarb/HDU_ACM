#include<iostream>
using namespace std;
int main()
{
	int a;
	long long b[51] = { 3, 6, 6 };
	for (int i = 3; i < 51; i++)
	{
		b[i] = b[i - 1] + b[i - 2] * 2;
	}
	while (cin>>a)
	{
		cout << b[a-1] << endl;
	}
}