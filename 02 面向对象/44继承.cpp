/*
继承的基本语法
*/
#include<iostream>
using namespace std;


//继承好处，减少重复代码
//语法： class  子类：继承方式 父类
//子类 派生类  父类 基类
//继承
class thispage
{
public:
	void header()
	{
		cout << "public head" << endl;
	}
	void footer()
	{
		cout << "help" << endl;
	}
	void left()
	{
		cout << "java python c++..." << endl;
	}

};

//java页面
class java :public thispage
{
public:
	void content()
	{
		cout << "java download" << endl;
	}
};


class python :public thispage
{
public:
	void content()
	{
		cout << "python download" << endl;
	}
};

class cplus :public thispage
{
public:
	void content()
	{
		cout << "cpp download" << endl;
	}
};

void test01()
{
	cout << "--------------------------------------------" << endl;
	cout << "Java download" << endl;
	java ja;

	ja.header();
	ja.content();
	ja.footer();
	ja.left();

	cout << "--------------------------------------------" << endl;
	cout << "c++ download" << endl;
	python py;

	py.header();
	py.content();
	py.footer();
	py.left();

	cout << "--------------------------------------------" << endl;
	cout << "python download" << endl;
	cplus cp;

	cp.header();
	cp.content();
	cp.footer();
	cp.left();

}

int main()
{
	test01();
	system("pause");
	return 0;
}