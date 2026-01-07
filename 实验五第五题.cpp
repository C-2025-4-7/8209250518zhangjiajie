#include<iostream>
using namespace std;
class Point 
{
private:
	int x, y;
public:
	Point():x(60),y(80){}
	void setpoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + i;
	}
	void display() 
	{
		cout << "坐标:(" << x << "," << y << ")" << endl;
	}

};
int main()
{
	Point p;
	cout << "初始坐标（构造函数初始化):";
	p.display();
	p.setpoint(10, 20);
	cout << "修改后坐标：";
	p.display();
	return 0;
}