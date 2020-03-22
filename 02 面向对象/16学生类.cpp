#include<iostream>
using namespace std;
#include<string>

//类中的属性和行为都叫做成员
//属性	成员属性	成员变量
//行为	成员函数	成员方法

class student
{
public://权限

	//属性
	//姓名
	string m_name;
	//学号
	string m_id;

	//行为
	//显示学生
	void showstu()
	{
		cout << "name:" <<m_name<< endl;
		cout << "id:" <<m_id<< endl;
	}
	
	//给姓名赋值
	void setname(string name)
	{
		m_name = name;
	}
	//id 赋值
	void setid(string id)
	{
		m_id = id;
	}

};

int main()
{
	//创建一个具体的学生 实例化
	student stu1;
	stu1.setname = "赵云";
	stu1.setid = "317317";

	//显示信息
	stu1.showstu();//通过类来调用

	student stu2;
	stu2.m_name = "曹操";
	stu2.m_id = "222317";

	stu2.showstu();
	system("pause");
	return 0;
}
