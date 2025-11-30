#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		d = a + b + c;
		cout << d << endl;
		if (a == b || b == c || c == a)
		{
			cout << "是等腰三角形" << endl;
		}
		else
		{
			cout << "不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "不能构成三角形" << endl;
	}
	return 0;
}