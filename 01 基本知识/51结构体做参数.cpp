#include<iostream>
using namespace std;
#include<string>

//将结构体作为函数参数往函数中传递
//定义结构体
struct student
{
	int score;
	int age;
	string name;
};

//1.值传递
void printstudent1(struct student s)
{
	s.age = 100;
	cout << "printstudent1(struct student s) print = " << s.name << "\t" << s.score << "\t" << s.age << endl;
}

//2.地址传递
void printstudent2(struct student* p)
{
	//地址传递时，需要用指针修改  ->
	p->age = 100;
	cout << "printstudent2(struct student* p) print = "<<p->name<<"\t"<< p->score <<"\t"<< p->age<<endl;
}

int main()
{
	//做参数
	//将学生传入到一个参数，打印学生信息
	//创建结构体变量
	struct student s;
	s.age = 20;
	s.name = "xiaoming";
	s.score = 99;

	//printstudent1(s);

	printstudent2(&s);
		
	cout << "\t" << "\t" << "\t"<<"main() print = " << s.name << "\t" << s.score << "\t" << s.age << endl;

	system("pause");
	return 0;
}
