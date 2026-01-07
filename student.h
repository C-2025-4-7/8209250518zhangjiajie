#ifndef STUDENT_H
#define STUDENT_H
#include<cstring>
class Student {
private:
	int num;
	char name[20];
	char sex;
public:
	void display();
	void set_value(int n, const char* nm, char s);
};
#endif
