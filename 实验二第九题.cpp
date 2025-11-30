#include<iostream>
using namespace std;
int main()
{
	const double a = 0.8;
	int b = 2;
	double c = a * b;
	int d = 1;
	while (true)
	{
		int e = b * 2;
		if (e > 100)
			break;
		b = e;
		c += b * a;
		d++;
	}
	double f = c / d;
	cout << "每天平均花费" << f << endl;
	return 0;
}