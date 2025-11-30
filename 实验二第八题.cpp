#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, xn, xn1;
	cin >> a;
	if (a < 0)
	{
		cout << "a不能为0" << endl;
	}
	xn = a;
	do {
		xn1 = 0.5 * (xn + a / xn);
		double temp = xn;
		xn = xn1;
		xn1 = temp;
	} while
		(fabs(xn - xn1) >= 1e-5);
	cout << "平方根" << xn << xn1 << endl;
	return 0;
}