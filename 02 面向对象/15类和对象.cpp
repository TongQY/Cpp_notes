#include<iostream>
using namespace std;
//类和对象
//c++面向对象三大特性  封装继承多态；
//万物皆可对象，对象有属性和行为
//人为对象，属性：姓名，年龄，身高···，行为：走、跑、唱歌
//车为对象，属性：轮胎，车灯，喇叭···，行为：载人、放空调
//具有相同性质的对象称之为类，人是人类，车是车类

//封装：
//意义
/*
	1.将属性行为作为一个整体，表现生活中的事物
	2.将属性和行为加以权限控制
*/

//设计一个圆类，求周长
//公式 ：2*PI*半径

const double PI = 3.14;
//class代表设计一个类，类的后面紧跟类名称
class Circle
{
	//访问权限
	//公共权限
public:
	
	//属性
	int m_r;
	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	//通过圆类，创建具体的圆（对象）
	Circle c1;
	c1.m_r = 10;

	cout <<"calculateZC: " <<c1.calculateZC() << endl;//calculateZC ()不可省略括号

	system("pause");
	return 0;
}
