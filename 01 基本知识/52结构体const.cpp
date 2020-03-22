#include<iostream>
using namespace std;
#include<string>

//结构体const防止误操作

struct Student
{
	//成员列表
	string name;
	int age;
	int score;
};

//因为传参是地址时，节约内存，但这样会造成可能真的修改结构体中的值，因此参数是const型的时候，结构体的值便是常量，无法修改
void printstu(const Student* s)
{	
	//指针用->
	//s->age = 1;const类型无法修改，防止误操作
	cout << "s.name = " << s->name << "\t" << "s.score = " << s->score << "\t"<<"s.age = "<< s->age << endl;
}

int main()
{
	//创建结构体变量
	struct Student s {"zhangs",15,70};
	//通过函数打印结构体信息
	//printstu(s);将形参改为指针，减少内存空间，而且不会复制新的副本
	printstu(&s);
	system("pause");
	return 0;
}
