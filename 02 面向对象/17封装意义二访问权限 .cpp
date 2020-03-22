#include<iostream>
using namespace std;

//类在设计时，可以把属性和行为放在不同的权限下，加以控制
//访问权限有三种
//
//1.公共权限		public			成员 类内可访问 类外可访问
//2.保护权限		protected		成员 类内可访问 类外不可访问 
//儿子可以访问父亲中的保护内容
//3.私有权限		private			成员 类内可访问 类外不可访问
//只有父类自己访问

class Person
{
public:
	//公共权限
	string m_Name;

protected:
	//保护权限
	string m_Car;

private:
	//私有权限
	int m_Password;

public:
	void func()
	{
		m_Name = "zhangsan";
		m_Car = "tuola";
		m_Password= 123455;
	}
};

int main()
{

	//实例化对象
	Person p1;

	p1.m_Name = "lisi";
	
	//p1.m_Car;保护权限内容，类外访问不到

	system("pause");
	return 0;
}
