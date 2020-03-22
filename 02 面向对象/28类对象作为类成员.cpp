#include<iostream>
using namespace std;
#include<string>

//类中的成员，可以是另一个类的对象，称该成员为对象成员
//当其他类对象作为本类对象成员，构造时先构造类对象，再构造自身，析构时顺序相反
//手机类
class phone
{
public:
	phone(string name)
	{
		cout << "phone 构造调用" << endl;//测试 人和手机谁先调用
		m_pname = name;
	}
	~phone()
	{
		cout << "phone 析构调用" << endl;
	}
	//手机名称
	string m_pname;
};

//人类
class person
{
public:

	person(string name, string pname):m_name(name),m_phone(pname)
	// m_phone=pname 相当于写了 m_phone = phone(pname)，给m_phone初始化
	//在执行这个函数前，给这个函数传参时，先调用phone这个类，
	{
		cout << "person 调用" << endl;//测试 人和手机谁先调用
	}

	~person()
	{
		cout << "person 析构"<< endl;
	}
	string m_name;
	phone m_phone;
};

void test01()
{
	person p("zhansan", "iphone");
	cout << "name: " << p.m_name << "phone: "<<p.m_phone.m_pname  << endl;
	//p.m_phone.m_pname，m_phone属于phone类型，手机名称只是其中一个属性
}


int main()
{

	test01();

	/*
	phone 构造调用
	person 调用
	name: zhansanphone: iphone
	person 析构
	phone 析构调用
	*/

	system("pause");
	return 0;
}
