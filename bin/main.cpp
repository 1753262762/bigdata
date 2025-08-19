/*
	main
*/
#include "_MES_W_T.h"
#include "_EES_W_T.h"
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		BigNum a, b, sum;
		cin >> a >> b;
		if (s == "+")
		{
			sum = a + b;
		}
		else if (s == "-")
		{
			sum = a - b;
		}
		else if (s == "*")
		{
			sum = a * b;
		}
		// 闹麻了没写除法
		sum.print();
	}
	return 0;
}
