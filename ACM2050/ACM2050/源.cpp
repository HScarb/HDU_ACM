#include <iostream>
using namespace std;
int a[10001] = { 0, 2, 7 };
int main()
{
	for (int i = 3; i < 10001; i++)
		a[i] = a[i - 1] + 4 * i - 3;
	int c, n;
	cin >> c;
	while (c-- && cin >> n)
		cout << a[n] << endl;
	return 0;
}
