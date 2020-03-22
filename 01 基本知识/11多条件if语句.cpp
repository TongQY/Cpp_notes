#include<iostream>
using namespace std;

int main()
{
	/*选择结构 多条件if
	1.输入一个分数 
				>=600  一本
			  	>=500  二本
				>=400  三本
				< 400  未上本科
	2.提示输入分数

	3.判断 
	*/
	int score = 0;
	cout << "score = " << endl;
	cin >> score;
	cout << "score = " << score << endl;

	if (score > 600)
	{
		cout << "class 1" << endl;
	}
	else if (score >= 500)
	{
		cout << "class 2"<< endl;
	}
	else if (score >= 400)
	{
		cout << "class 3" << endl;
	}
	else
	{
		cout << "none" << endl;
	}

	system("pause");
	return 0;
}
