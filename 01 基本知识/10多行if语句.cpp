#include<iostream>
using namespace std;

int main()
{
	//1.输入分数
	int score = 0;
	cout << "score = "<< endl;
	cin >> score;
	//2.输出分数
	cout << "score = " << score << endl;
	//3.判断
	if (score > 600)
	{
		cout << "congratulations" << endl;
	}
	else
	{
		cout << "jiayou" << endl;
	}
	system("pause");

	return 0;
}
