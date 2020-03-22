//浅拷贝：简单的复制拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作
//析构的作用

#include<iostream>
using namespace std;

//总结：如果有在堆区开辟的数据，要自己写拷贝构造函数，防止浅拷贝带来的问题

class person
{
public:
	//默认构造
	person()
	{
		cout << "default" << endl;
	}
	//有参构造
	person(int age,int height)
	{
		m_age = age;
		m_height=new int(height);//返回值是int * 类型,用指针接收
		cout << "parameter" << endl;
	}

	//自己写拷贝构造函数，解决带来的浅拷贝问题
	person(const person &p)
	{
		cout << "copy function" << endl;
		m_age = p.m_age;
		//m_height = p.m_height;编译器默认实现就是这行代码
		//深拷贝操作
		new int(*p.m_height);//p.m_height是地址，*p.m_height解引用
		m_height = new int(*p.m_height);
	}

	//析构函数
	~person()
	{
		//new 开辟的数据在堆区，析构代码将在堆区开辟的数据释放
		if (m_height != NULL)//如果m_height指向某一个地址
		{
			delete m_height;//删除指针指向的地址
			m_height = NULL;//防止出现空指针，置空
		}
		cout << "destructor" << endl;
	}
	int m_age;
	int *m_height;//身高
};

void test01()
{
	person p1(18,180);
	cout << "p1.age :" << p1.m_age << endl;
	cout << "p1.height :" << *p1.m_height  << endl;

	person p2(p1);
	//p2拷贝p1时，对于new出来的堆区，p1只进行将堆区地址传递给p2
	//栈先进后出，p2先被释放，执行析构代码，将堆区的内存释放
	//p1再进行析构时，指针存在，只是指针指向的堆区的数值已经被释放掉，再去释放，就是非法操作
	//如何解决？自己写拷贝函数，申请另一块堆区内存，存放拷贝的原本堆区数据
	cout << "p2.age :" << p2.m_age << endl;

	cout << "p2.height :" << *p2.m_height << endl;
}

int main()
{
	test01();
	system("pause");

	return 0;
}
