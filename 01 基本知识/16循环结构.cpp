#include<iostream>
using namespace std;

int main()
{
	//while（条件）{循环语句}
	//只要循环条件结果为真，就执行循环语句
	//打印0-9数字
	int num = 0;

	while (num < 10)
	{
		cout << "num = " << num << endl;
		num++;
	}

	//注意避免死循环
	system("pause");
	return 0;
}