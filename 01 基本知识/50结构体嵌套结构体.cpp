#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};

int main()
{
	teacher t;
	t.id = 10001;
	t.name = "zhouduo";
	t.age = 18;
	t.stu.name ="lonngj";
	t.stu.age = 19;
	t.stu.score = 99;

	teacher* p = NULL;
	p = &t;

	cout << " name :  " << p->name //老师姓名
		<< " age  :  " << p->age << endl;//老师年龄
	cout << endl;
	cout<<" name :  " << p->stu.score//学生姓名
		 <<" age:  " << p->stu.score//学生年龄
		 <<" score:  " << p->stu.score//学生分数
		 << endl;
}
