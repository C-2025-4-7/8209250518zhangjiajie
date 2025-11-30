#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5 - i; j >= i; j--)
		{
			cout << " " << endl;
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*" << endl;
		}
		cout << endl;
		return 0;
	}
}