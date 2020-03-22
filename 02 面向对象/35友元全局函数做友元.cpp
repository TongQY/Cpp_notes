#include<iostream>
using namespace std;
#include<string>
/*
类中一些私有属性，想让类外特殊的一些函数或者类进行访问，用到友元

友元的目的就是让一个函数或者类 访问另一个类中的私有成员
关键字：friend
三种实现
1.全局函数做友元
2.类做友元
3.成员函数做友元
*/

class buliding
{
	//goodguy全局函数 是building的好朋友，可以访问building私有成员
	friend void goodguy(buliding* friendguy);//这行是基友（证）声明
public:
	buliding()
	{
		m_sittingroom = "keting";
		m_bedroom = "woshi";
	}
public:
	string m_sittingroom;
private:
	string m_bedroom;
};

//全局函数
void goodguy(buliding * friendguy)
{
	cout << "goodguy 全局函数 are visiting" << friendguy->m_sittingroom << endl;

	cout << "goodguy 全局函数 are visiting" << friendguy->m_bedroom  << endl;//访问private
}


void test01()
{
	buliding friendguy;
	goodguy(&friendguy);
}

int main()
{
	test01();

	system("pause");

	return 0;

}
