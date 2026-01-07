#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void input() {
		cin >> hour >> minute >> sec;
	}
	void output() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main() {
	Time ti;
	ti.input();
	ti.output();
	return 0;
}