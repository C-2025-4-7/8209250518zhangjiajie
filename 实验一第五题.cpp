#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double  a;
	cin >> a;
	double b = (a - 32) / 1.8;
	cout << fixed << setprecision(2);
	cout << b << endl;
	return 0;

}