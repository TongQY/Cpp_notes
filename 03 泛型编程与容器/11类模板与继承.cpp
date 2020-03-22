#include<iostream>
using namespace std;

template<class T>
class base
{
	T m;
};

//class son :public base//编译需要给子类分配内存，必须知道父类中T的类型才可以向下继承
class son :public base<int>//必须分配一个类型
{

};

void test01()
{
	son s1;
}

//如果想灵活指定父类父类中T的数据类型，子类也需要成为类模板
template<class T1,class T2>
class son2 :public base<T2>
{
public:
	son2()
	{
		cout << "typeid(T1).name() "<<typeid(T1).name() << endl;//int
		cout << "typeid(T2).name() "<<typeid(T2).name() << endl;//char
	}	
};

void test02()
{
	son2<int, char>s2;
}

int main()
{
	test02();
	system("pause");
	return 0;
}
