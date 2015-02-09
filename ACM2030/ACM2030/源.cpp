#include <iostream>
using namespace std;
int main()
{
	int n;
	int cont;
	cin >> n;
	getchar();
	while (n--)
	{
		cont = 0;
		char ch[100000];
		gets(ch);
		int len = strlen(ch);
		for (int i = 0; i<len; i++)
			if (ch[i]<0) cont++;
		cout << cont / 2 << endl;
	}
	return 0;
}