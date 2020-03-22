#include<iostream>
using namespace std;

int main()
{
	//switch语句
	//给电影打分
	//10-9经典
	//8-7很好
	//6-5一般
	//5以下烂片

	//1.提示用户输入
	cout << "score = " << endl;
	//2.用户打分
	int score = 0;
	cin >> score;
	//3.根据分数显示结果
	cout << "score = " << score << endl;

	switch (score) 
	{
	case 10:
		cout << "best movie!" << endl;
		break;//退出分支
	case 9:
		cout << "best movie!" << endl;
		break;
	case 8:
		cout << "good " << endl;
		break;
	case 7:
		cout << "good " << endl;
		break;
	case 6:
		cout << "normal " << endl;
		break;
	case 5:
		cout << "normal " << endl;
		break;
	default:
		cout << "bad movie " << endl;
	}

	//if 与switch区别？
	//switch缺点  判断时只能是整形或者字符型，不可为区间
	//switch优点  结构清晰，执行效率高

	system("pause");
	return 0;
}