#include<iostream>
using namespace std;
#include<vector>
#include<string>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

void test01()
{
	vector<Person> v;

	Person p1("aa", 170);
	Person p2("bba", 170);
	Person p3("aba", 150);
	Person p4("absda", 105);
	Person p5("asa", 120);

	//往容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//1.解引用访问
		cout << "姓名：" <<(*it).m_name <<endl;//（*it) = person
		cout << "年龄：" <<(*it).m_age << endl;
		//2.指针访问
		cout << "姓名：" << it->m_name << endl;
		cout << "年龄：" << it->m_age << endl;
	}
}

void test02()
{
	vector<Person*> v;

	Person p1("aa", 170);
	Person p2("bba", 170);
	Person p3("aba", 150);
	Person p4("absda", 105);
	Person p5("asa", 120);

	//往容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历循环
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{

		cout << "姓名：" << (*it)->m_age<< endl;
		cout << "年龄：" << (*it)->m_name << endl;
		(*it)->m_age;
		(*it)->m_name;
	}
}

int main()
{
	test02();
	system("pause");
	return 0;
}