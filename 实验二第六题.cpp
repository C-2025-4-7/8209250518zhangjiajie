#include<iostream>
using namespace std;
int main()
{
	int a, b, min_num, gcd = 1, lcm;
	cin >> a >> b;
	min_num = (a < b) ? a : b;
	for (int i = min_num; i >= 1; --i)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
			break;
		}
	}
	lcm = a * b / gcd;
	cout << "最大公约数为" << gcd;
	cout << "最小公倍数为" << lcm;
	return 0;
}