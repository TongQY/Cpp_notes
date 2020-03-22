#include<iostream>
using namespace std;
#include<string>

//分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
/*
多态优点
1.代码组织结构清晰
2.可读性强
3.利于前期和后期的扩展和维护
*/

//普通实现
class calculator
{
public:

	int getresult(string oper)
	{
		if (oper == "+")
		{
			return m_a + m_b;
		}
		else if (oper == "-")
		{
			return m_a - m_b;
		} else if
			(oper == "*")
		{
			return m_a * m_b;
		}
		//如果扩展新的功能，除法，需要修改源码
		//真实开发中，提倡扩展开放，开放关闭
	}
	int m_a;
	int m_b;
};

void test01()
{
	//计算器对象
	calculator c;
	c.m_a = 10;
	c.m_b = 20;

	cout << "c1.m-a + c1.m-b = " << c.getresult("+") << endl;
	cout << "c1.m-a - c1.m-b = " << c.getresult("-") << endl;
	cout << "c1.m-a * c1.m-b = " << c.getresult("*") << endl;
	//cout << "c1.m-a / c1.m-b = " << c.getresult("/") << endl;
}

//利用多态实现
//好处，
//1.组织结构清晰
//2.可读性强
//实现计算器抽象类

class abstract
{
public:

	virtual int getresult()
	{
		return 0;
	}

	int m_a;
	int m_b;
};

//加法运算类
class addcalculater :public abstract
{
	virtual int getresult()
	{
		return m_a + m_b;
	}

};

//减法运算器
class subcalculater :public abstract
{
	virtual int getresult()
	{
		return m_a - m_b;
	}

};

//乘法运算器
class mulcalculater :public abstract
{
	virtual int getresult()
	{
		return m_a * m_b;
	}
};

void test02()
{
	//多态使用条件
	//父类指针或者引用指向子类对象

	abstract* abc = new addcalculater;//创建一个父类指针指向子类对象
	abc->m_a = 10;
	abc->m_b = 20;

	cout << abc->m_a + abc->m_b << endl;

	//堆区数据手动开辟手动销毁
	delete abc;

	//减法运算
	abc = new subcalculater;//创建一个父类指针指向子类对象
	abc->m_a = 10;
	abc->m_b = 20;

	cout << abc->m_a - abc->m_b << endl;
	delete abc;

	abc = new mulcalculater;//创建一个父类指针指向子类对象
	abc->m_a = 10;
	abc->m_b = 20;

	cout << abc->m_a * abc->m_b << endl;
	delete abc;
}



int main()
{
	test02();
	system("pause");
	return 0;
}
