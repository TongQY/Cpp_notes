/*
设计一个圆类，和一个点类，计算点和圆的位置关系
*/

#include<iostream>
#include"21circle.h"
#include"21point.h"
using namespace std;

void isincircle(Circle& c, Point& p)
{
	//计算圆心到点位置关系距离的平方
	//这里c.getcenter()得到的是一个圆心，属于点类
	//c.getcenter().getX()，意为取出圆心的x坐标的值，同理p.getX()，同理y坐标
	int distance = 
		(c.getcenter().getX() - p.getX())* (c.getcenter().getX() - p.getX()) +
		(c.getcenter().getY() - p.getY()) * (c.getcenter().getY() - p.getY());
	//计算半径平方
	int rdistance =
		(c.getR() * c.getR());//getR()  ()不要忘记
	
	//判断位置关系
	{if (distance == rdistance)
		{
			cout << "on " << endl;
		}
		else if (distance > rdistance)
		{
			cout << "out " << endl;
		}
		else
		{
			cout << "in " << endl;
		}
	}
}

int main()
{
	//创建圆的半径
	Circle c1;
	c1.setR(2);

	//创建圆的圆心
	Point center;
	center.setX(0);
	center.setY(0);

	//将point类型的圆心传递给圆类成为一个完整的圆
	c1.setcenter(center);

	//创建点
	Point P;
	P.setX(1);
	P.setY(1.1);

	isincircle(c1,P);

	system("pause");
	return 0;
}
