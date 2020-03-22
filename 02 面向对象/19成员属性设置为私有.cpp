#include<iostream>
using namespace std;
#include<string>
/*
成员属性设置为私有优点
1.可以自己控制读写限权
2.对于写限权，我们可以检测数据的有效性
(如果不在有效的范围内，直接返回函数，不再执行写的操作)
*/

class Person
{
	//公共接口,间接访问私有内容
public:
	//设置姓名
	void modifyname(string name)
	{
		m_name = name;
	}
	//获取姓名
	string getname()
	{
		return m_name;
	}

	//获取年龄
	int getage()
	{
		return m_age;
	}


	//如果想修改年龄，创建一个接口函数，该函数检测年龄范围
	//如果不再有效的范围内，直接返回函数，不再执行写的操作

	//修改年龄
	void setage(int age)
	{
		if (age < 0 || age>100)
		{
			m_age = 0;//初始化
			cout << "wrong age" << endl;
			return;
		}
		else
		{
		m_age = age;		
		}
	}

	//设置喜欢的人
	void setlover(string lover)
	{
		m_lover = lover;
		cout << m_lover << endl;
	}

private:

	//可读可写
	string m_name;

	//只读
	int m_age;

	//只写
	string m_lover;
};

int main()
{

	Person p;

	p.modifyname("zs");
	cout << p.getname() << endl;

	p.setage(19);
	cout << p.getage() << endl;
	
	p.setlover("zd");

	system("pause");

	return 0;
}
