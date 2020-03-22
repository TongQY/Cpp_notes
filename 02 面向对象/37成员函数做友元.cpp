#include<iostream>
using namespace std;
#include<string>

class Building;//类声明

class Goodguy
{
public:
	//构造函数
	Goodguy();

	//希望这个成员函数访问Building中的private内容
	void visit();

	//不希望这个成员函数访问Building中的private内容
	void visit2();

	Building* building;
};


class Building
{
	friend void  Goodguy::visit();//visit成员函数特权

public:
	Building();
public:
	string m_sittingroom;
private:
	string m_bedroom;
};

//Building声明
Building::Building()
{
	m_sittingroom = "keting";
	m_bedroom = "woshi";
}

//构造函数，给成员变量building new一个地址
Goodguy::Goodguy()
{
	building = new Building;
}

//访问Building 中的成员,要在Building类中声明
void Goodguy::visit()
{
	//访问public
	cout << "visit() class Goodguy are visiting" << building->m_sittingroom << endl;
	//访问private
	cout << "visit() class Goodguy are visiting" << building << endl;
}

void Goodguy::visit2()
{
	//访问public
	cout << "visit2() class Goodguy are visiting" << building->m_sittingroom << endl;
	//访问private
	//cout << "visit2() class Goodguy are visiting" << building-> << endl;//不能访问
}

//调用构造函数
void test01()
{
	Goodguy py;
	py.visit();
	py.visit2();
}

int main()
{
	test01();
	system("pause");
	return 0;
}
