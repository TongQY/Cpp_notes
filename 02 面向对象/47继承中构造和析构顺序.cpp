

#include<iostream>
using namespace std;

class base1
{
public:
	base1()
	{
		cout << "base1 构造" << endl;
	}
	~base1()
	{
		cout << "base1 析构" << endl;
	}

};

class son :public base1
{
public:
	son()
	{
		cout << "son 构造" << endl;
	}
	~son()
	{
		cout << "son 析构" << endl;
	}
};

void test01()
{
	son s;
	//先构造父类，再构造子类
}

int main()
{
	test01();
	system("pause");
	return 0;
}
