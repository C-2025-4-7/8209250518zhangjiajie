#include<iostream>
using namespace std;
int main()
{
	char ch1;
	cin >> ch1;
	if (ch1 >= 'a' && ch1 <= 'z')
	{
		cout << (char)(ch1 - 32) << endl;
	}
	else
	{
		cout << int(ch1 + 1) << endl;
	}
	return 0;
}