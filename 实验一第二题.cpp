#include<iostream>
#define PI 3.14159
using namespace std;
int main()
{
	double r, h;
	cin >> r >> h;
	double volume = (1.0 / 3) * PI * r * r * h;
	cout << "Ô²×¶Ìå»ýÎª£º" << volume << endl;
	return 0;
}