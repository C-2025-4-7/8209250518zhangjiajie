#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int s = 0;
	int d = 0;
	int x = 0;
	char g;
	cout << "请输入字符串" << endl;
	g = cin.get();
	while (g != '\n')
	{
		if (g == 32)
			a++;
		else if (g >= 48 && g <= 57)
			s++;
		else if ((g >= 65 && g <= 90) || (g >= 97 && g <= 122))
			d++;
		else
			x++;
		g = cin.get();
	}
	cout << "空格个数" << a << endl;
	cout << "数字个数" << s << endl;
	cout << "字母个数" << d << endl;
	cout << "符号个数" << x << endl;
	return 0;
}