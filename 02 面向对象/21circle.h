#pragma once
#include<iostream>
using namespace std;
#include"21point.h"

class Circle
{
public:
	//设置半径
	void setR(int r);
	
	//获取半径
	int getR();
	
	//设置圆心
	void setcenter(Point center);
	
	//获取圆心
	Point getcenter();//isincircle(Circle& c, Point& p)函数调用时，
	

private:

	int m_R;//半径

	//可以将另一个类作为本类中的成员
	Point m_Center;//圆心
};
