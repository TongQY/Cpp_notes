#include<iostream>
using namespace std;
#include<string>
/*
多态使用的时候，如果子类中有属性开辟到堆区，那么父类指针在释放时只会析构子类从它那里继承的那一部分无法调用到子类函数的析构代码

解决方式：将父类中的析构函数改为虚析构和纯虚析构

虚析构和纯虚析构共性：

1.可以解决父类指针释放子类对象

2.需要具体的函数实现

虚析构和纯虚析构的区别：
如果是纯虚析构，该类属于抽象类，无法实例化对象
*/

//虚析构和纯虚析构
class animal
{
public:
	animal()
	{
		cout << "animal 构造" << endl;
	}
	//纯虚函数
	virtual void speak() = 0;
	//纯虚析构，需要声明，也需要实现
	//有了纯虚析构，这个类也属于抽象类
	
	//这是纯虚析构
	virtual ~animal() = 0;
};

animal::~animal()
{
	cout << "animal 纯虚析构"<< endl;
}

class cat :public animal
{
public:
	cat(string name)
	{
		cout << "cat 构造" << endl;
		m_name = new string(name);
	}
	virtual void speak()
	{
		cout<<*m_name<<"speak"<<endl;
	}
	//释放cat对象
	~cat()
	{
		if (m_name != NULL)
		{
			cout << "cat 析构"<<endl;
			delete m_name;
			m_name = NULL;
		}
	}
	//在堆区
	string * m_name;
};

void test01()
{
	animal* an = new cat("tom");//在堆区开辟一个cat类对象 有参构造
	an->speak();
	//父类指针在析构时，只会调用子类继承它那部分的析构函数，导致子类如果有堆区属性，出现内存泄漏
	delete an;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
//解决多态无法实现子类析构问题，而建立虚析构