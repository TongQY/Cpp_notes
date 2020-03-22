#include<iostream>
using namespace std;

int main()
{
	//do
	//{
	//	循环语句
	//}while（循环条件）；
	//do while 先循环一次，再判断条件

	//输出0-9数字
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} 
	while (num<10);

	system("pause");

	return 0;
}
