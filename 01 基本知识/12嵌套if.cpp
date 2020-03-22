/*
提示用户输入分数，做出如下判断
大于600 一本
大于500 二本
大于400 三本
其余    为考上
一本分数中
大于700 考入北大
大于650 考入清华
大于600 考入人大
*/
#include<iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "score = " << endl;
	cin >> score;
	
	if (score > 600)
	{
		if (score > 700)
		{
			cout << "peking u"<<endl;
		}
		else if (score>650)
		{
			cout << "ching hua u"<<endl;
		}
		else {
			cout << "ren da" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "chass 2" << endl;
	}
	else if (score > 400)
	{
		cout << "class 3" << endl;
	}
	else
	{
		cout << "none" << endl;
	}

	return 0;
}
