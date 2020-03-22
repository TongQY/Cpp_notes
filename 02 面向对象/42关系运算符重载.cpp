#include<iostream>
using namespace std;
#include<string>

class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}

	//重载关系运算符
	bool operator==(person& p2)
	{
		if (this->m_age == p2.m_age && this->m_name == p2.m_name)
		{
			return true;
		}	
		else
		{
			return false;
		}
	}

	bool operator!=(person& p2)
	{
		if (this->m_age == p2.m_age && this->m_name == p2.m_name)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	string m_name;
	int m_age;
};



void test01()
{
	person p1("tom", 18);
	
	person p2("tom", 18);

	if (p1 == p2)
	{
		cout << "p1 == p2" << endl;
	}
	else 
	{
		cout << "p1 bu p2" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1 bu p2" << endl;
	}
	else
	{
		cout << "p1 == p2" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}
