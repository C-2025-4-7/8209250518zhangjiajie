#include<iostream>
using namespace std;
int main()
{
	int  a, b;
	char i;
	cin >> a >> i >> b;
	switch (i)
	{
	case '+':
		cout << a + b << endl;
		break;
	case'-':
		cout << a - b << endl;
		break;
	case'*':
		cout << a * b << endl;
		break;
	case'/':
		if (b == 0)
			cout << "除数不能为0" << endl;
		else
			cout << a / b << endl;
		break;
	}
	return 0;
}