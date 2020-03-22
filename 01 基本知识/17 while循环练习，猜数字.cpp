#include<iostream>
using namespace std;
//time 系统时间头文件的包含
#include<ctime>

int main()
{
	//系统随机生成一个介于1-100的数字，玩家猜测，如果猜错，提示玩家过大或过小，如果猜对，退出游戏


	//添加随机数种子 利用当前系统时间 生成随机数，防止每次随机数一样
	srand((unsigned int)time(NULL));
	//1.生成数
	int num = rand() % 100 + 1;   //	rand()%100  生成0-99的数    +1就是1-100

	//2.玩家猜测
	int val = 0;//初始化玩家输入的数据
	cout << "please give a number? " << endl;

	while (1)
	{
		cin >> val;
		//3.判断
		if (val > num)
		{
			cout << "bigger " << endl;
		}
		else if (val < num)
		{
			cout << "smaller" << endl;
		}
		else
		{
			cout << "right" << endl;
			break;//猜对	退出
		}
		//猜错	提示猜的结果 过大或过小 重新返回第二步
	}
	system("pause");
	return 0;
}
