#include<iostream>
using namespace std;
#include<string>
//通过结构体指针访问结构体中的成员->

struct student
{
	string name;
	int age;
	int score;
};

int main()
{
	//1.创建结构体变量
	struct student s = { "zhangsan ",18,100 };

	//2.通过指针指向结构体变量
	struct student* p = &s;//结构体指针

	//3.通过指针访问结构体变量中的数据

	cout <<" name :  " <<p->name //stuarr[i].name
		<< " age  :  " << p->age//stuarr[i].age
		<< " score:  " << p->score//stuarr[i].score
		<< endl;
	system("pause");

	return 0;
}
