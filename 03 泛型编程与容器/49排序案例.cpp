#include<iostream>
using namespace std;
#include<list>
#include<algorithm>
#include<string>
/*
将person自定义数据类型排序，年龄姓名身高 按年龄升序，若年龄相同降序
*/

class Person
{
public:
	Person(string name, int age, double hei)
	{
		this->age = age;
		this->height = hei;
		this->name = name;
	}

	string name;
	int age;
	double height;
};

bool compare(Person & p1,Person & p2)//返回类型为bool的函数
{
	//年龄判断
	if (p1.age == p2.age)
	{
		//年龄相同降序
		return p1.height > p2.height;
	}
	//返回年龄
	return p1.age < p2.age;
}

void test01()
{
	list<Person>l;

	//准备数据
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	//往容器插入数据
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);

	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名：" << (*it).name;
		cout << endl;
		cout << "年龄：" << it->age; 
		cout << "身高：" << (*it).height; cout << endl;
	}
	cout << endl;

	//排序
	cout << "----------------------" << endl;
	cout << "排序后：" << endl;

	l.sort(compare);//指定排序规则
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名：" << (*it).name;
		cout << endl;
		cout << "年龄：" << it->age;
		cout << "身高：" << (*it).height; cout << endl;
	}
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}