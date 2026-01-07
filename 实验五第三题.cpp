#include<iostream>
using namespace std;
class Cuboid {
private:
	double length, width, height;
public:
	void input()
	{
		cin >> length >> width >> height;
	}
	double calculateVolume()
	{
		return length * width * height;
	}
};
int main()
{
	Cuboid cubs[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "输入第" << i + 1 << "个长方柱的长、宽、高";
		cubs[1].input();
	}
	for (int i = 0; i, 3; i++) 
	{
		cout << "第" << i + 1 << "个长方柱的体积" << cubs[i].calculateVolume()<< endl;
    }
	return 0;

}