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
//ÿֻţ�����꿪ʼ��Сţ���������һͷţ����ǰ�ʹ���(������ǰ�������߸�������ģ�������ǰ�ʹ��ڵ�ţ����һ������Сţ������f[i]=f[i-1]+f[i-3],����f[i-1]��ȥ�����µģ�f[i-3]�ǽ���������