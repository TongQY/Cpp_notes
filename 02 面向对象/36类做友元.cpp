#include<iostream>
using namespace std;
#include<string>

class Building
{
	friend class Goodguy ;//基友证
public:
	Building();
public:
	string m_sittingroom;
private:
	string m_bedroom;
};

class Goodguy
{
public:

	Goodguy();//构造函数，名字与类名相同

	void visit();//参观函数访问Building中的属性

	Building* building;//名字为building 的 Building类指针
};

//类外写成员(构造)函数//给类中的属性赋值操作
Building::Building() 
{
	m_sittingroom = "keting";
	m_bedroom = "woshi";
}

//类外写成员(构造)函数//堆区创建建筑一个对象
Goodguy::Goodguy()
{
	//创建一个建筑对象
	building = new Building;//在堆区创建一个对象，并返回地址
}

//类外写类内普通函数//访问建筑对象的属性
void Goodguy::visit()//成员函数返回类型写在作用域前面
{
	//访问pubilc
	cout << "class Goodguy are visiting" << building->m_sittingroom << endl;

	//访问private
	cout << "class Goodguy are visiting" << building->m_bedroom << endl;
}

//利用Goodguy类创建一个Building对象  py  py.来访问Building对象
void test01()
{
	Goodguy py;
	py.visit();
}

int main()
{
	test01();
	system("pause");
	return 0;

}
//总结：这个例子将类内的所有属性在类外进行操作，封装思想