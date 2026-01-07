#include<iostream>
#include"student.h"
using namespace std;
int main()
{
	Student stud, stud1;
	stud.set_value(101, "ZhangSan", 'm');
	stud1.set_value(007, "tcg", 'm');
	stud.display();
	stud1.display();
	return 0;
}