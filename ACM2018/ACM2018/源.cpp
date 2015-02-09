#include<iostream>
#include<cmath>
using namespace std;
int cow(int n)
{
	if (n>4)
		return cow(n - 1) + cow(n - 3);
	else return n;
}
void main()
{
	int n;
	while (cin >> n, n != 0)
		cout << cow(n) << endl;
}
//每只牛第四年开始生小牛，所以如果一头牛三年前就存在(在三年前出生或者更早出生的），三年前就存在的牛今年一定会生小牛，所以f[i]=f[i-1]+f[i-3],其中f[i-1]是去年留下的，f[i-3]是今年新生的