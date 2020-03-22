#include<iostream>
using namespace std;
#include<deque>
#include<set>
#include<string>

class person
{
public:
	person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	string m_name;
	int m_age;
};

class compare
{
public:
	bool operator()( const person& p1, const person& p2)const
	{
		//按年龄降序
		return p1.m_age > p2.m_age;
	}
};

void test01()	
{
	//自定义数据类型，要指定排序规则
	set<person,compare>s;

	//创建对象
	person p1("张飞", 10);
	person p2("大熊", 14);
	person p3("张三", 11);
	person p4("哪吒", 12);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<person,compare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << (*it).m_name<<" ";
		cout << (*it).m_age << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}