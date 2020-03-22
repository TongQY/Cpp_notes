#include<iostream>
using namespace std;
/*
设计立方体类
求其面积和体积
用全局函数和成员函数判断立方体是否相同
*/

//立方体类
/*
1.创建类
2.设计属性
3.设计行为 获取面积和体积
4.分别利用全局函数和成员函数判断两立方体是否相等
*/

class Cube
{
public:
	//行为

	//设置获取长宽高
	//设置长
	void setlong(int length)
	{
		m_L = length;
	}
	//获取长
	int getlong()
	{
		return m_L;
	}
	//设置宽
	void setwidth(int width)
	{
		m_W = width;
	}
	//获取宽
	int getwidth()
	{
		return m_W;
	}
	//设置高
	void sethigh(int high)
	{
		m_H = high;
	}
	//获取高
	int gethigh()
	{
		return m_H;
	}
	//获取面积
	int calculateS()
	{
		return 2*(m_L * m_H + m_L * m_W + m_W * m_H);
	}
	//获取体积
	int calculateV()
	{
		return m_L * m_H * m_W;
	}

	//2.利用成员函数判断是否相同
	bool issamebyclass(Cube& C2)//C1调用，参数为C2
	{
		if (m_W == C2.getwidth() && m_H == C2.gethigh() && m_L == C2.getlong())
		{
			return true;
		}
		return false;
	}
private:
	//属性
	//长宽高
	int m_L;
	int m_W;
	int m_H;
};

//1.利用全局函数判断是否相同
bool issame(Cube &C1,Cube &C2)//引用传递
{
	if (C1.getwidth() == C2.getwidth() && C1.gethigh() == C2.gethigh() && C1.getlong() == C2.getlong())
	{
		return true;
	}
	return false;
}


int main()
{
	//创建对象
	Cube C1;

	C1.sethigh(10);
	C1.setlong(10);
	C1.setwidth(10);

	cout << "s = " << C1.calculateS() << endl;//C1.calculateS()中（）不能省略，这个成员是一个函数
	cout << "v = " << C1.calculateV() << endl;

	//创建第二个立方体
	Cube C2;

	C2.sethigh(10);
	C2.setlong(10);
	C2.setwidth(11);

	//全局函数判断
	bool ret = issame(C1, C2);
	if (ret)
	{
		cout << "全局函数判断 same" << endl;
	}
	else 
	{
		cout << "全局函数判断 don't same" << endl;
	}
	
	//成员函数判断
	bool ret2 = C1.issamebyclass(C2);
	if (ret2)
	{
		cout << "成员函数判断 same" << endl;
	}
	else
	{
		cout << "成员函数判断 don't same" << endl;
	}
	system("pause");
	return 0;
}
