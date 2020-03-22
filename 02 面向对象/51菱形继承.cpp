#include<iostream>
using namespace std;

//动物类
class Animal
{
public:
	int m_age;//兽龄
};

//羊类
class Sheep:virtual public Animal
{
	
};
//驼类
class Tuo:virtual public Animal 
{
	
};

//羊驼类
class SheepTuo :public Sheep, public Tuo
{

};

void test01()
{
	SheepTuo yt;
	//只需1个age，但继承了两份
	yt.Sheep::m_age = 18;
	yt.Tuo::m_age = 8;

	
	//采用虚继承 解决菱形继承问题
	//继承之前 加上关键字 virtual 变为虚继承
	//Animal 类型称为 虚基类

	cout<< yt.Sheep::m_age<<endl;
	cout << yt.Tuo::m_age<< endl;

	cout << yt.m_age << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
