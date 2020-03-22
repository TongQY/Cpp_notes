#include<iostream>
using namespace std;
#include<string>

//struct 结构体名{ 结构体成员列表 }；
//三种创建方式


//通过学生数据类型创建具体学生
//struct 结构体名 { 结构体成员列表 }；
//struct 关键字可省略
int main()
{
	//1.创建学生数据类型     姓名 年龄 分数
	struct Student
	{
		//成员列表
		string name;
		int age;
		int score;
	}s3;

	//2.通过学生数据类型创建具体学生
	//2.1 struct Student s1
	struct Student s1;
	s1.name = "zhsan";
	s1.age = 19;
	s1.score = 95;
	
	cout << "name:" << s1.name << "     age:" << s1.age << "    score:" << s1.score << endl;
		
	//2.2 struct Student s2={1,2,3}
	struct Student s2 = { "lisi",18,83 };

	cout << "name:" << s2.name << "      age:" << s2.age << "    score:" << s2.score << endl;

	//3.
	//struct Student
	//{
	//	string name;
	//	int age;
	//	int score;
	//}s3;//引入结构体时顺便创建

	s3.name = "wanger";
	s3.age = 19;
	s3.score = 90;

	cout << "name:" << s3.name << "    age:" << s3.age << "    score:" << s3.score << endl;
	system("pause");
	return 0;
}
