/*
制作饮品

流程为 煮水-冲泡-倒入杯中-加入辅料

利用多态实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶

冲咖啡：煮水-冲泡咖啡-倒入杯中-加入糖和牛奶
泡  茶：煮水-冲泡茶叶-倒入杯中-加入柠檬
*/

#include<iostream>
using namespace std;


class absdriking
{
public:
	//煮水
	virtual void boil() = 0;

	//冲泡
	virtual void brew() = 0;

	//倒入杯中
	virtual void pour() = 0;

	//加入辅料
	virtual void add() = 0;

	//制作饮品
	void makedrinking()
	{
		boil();
		brew();
		pour();
		add();
	}

};

//具体制作
//咖啡
class coffee :public absdriking
{
public:
	virtual void boil()
	{
		cout << "spring water" << endl;
	}

	//冲泡
	virtual void brew()
	{
		cout << "coffee" << endl;
	}

	//倒入杯中
	virtual void pour()
	{
		cout << "pour" << endl;
	}

	//加入辅料
	virtual void add()
	{
		cout << "add suger" << endl;
	}

};


//具体制作
//茶
class tea :public absdriking
{
public:
	virtual void boil()
	{
		cout << " water" << endl;
	}

	//冲泡
	virtual void brew()
	{
		cout << "tea" << endl;
	}

	//倒入杯中
	virtual void pour()
	{
		cout << "pour" << endl;
	}

	//加入辅料
	virtual void add()
	{
		cout << "add lenom" << endl;
	}

};

void dodrinking(absdriking *abs)//形参absdriking *abs = new coffee，父类指针指向子类对象
{
	abs->makedrinking();
	delete abs;
}

void test01()
{
	dodrinking(new coffee);
	cout << "-------------------------------------------" << endl;
	dodrinking(new tea);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
