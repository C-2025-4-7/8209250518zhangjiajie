#include<iostream>
using namespace std;
class Student 
{
public:
	int id;
	int score;
};
void max(Student* p, int n) 
{
	Student* maxP = p;
	for (int i = 1; i < n; i++)
	{
		if (p[i].score > maxP->score)maxP = &p[i];
	}
	cout<<"最高成绩："<< maxP->score <<",对应学号:" << maxP->id << endl;
}
int main()
{
	Student studs[5] = { {101,85},{102,92},{103,78},{104,95},{105,88} };
	max(studs, 5);
	return 0;
}