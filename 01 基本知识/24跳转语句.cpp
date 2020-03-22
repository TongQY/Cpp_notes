#include<iostream>
using namespace std;


int main()
{
	//break 语句，跳出选择结构或者循环结构

	//使用时机:
	//1.出现在switch条件语句 终止case，跳出switch
	//2.出现在循环语句，跳出当前循环
	//3.出现在嵌套语句，跳出最近的内层循环语句


	//1.出现在switch条件语句 终止case，跳出switch
	//cout << "choose class " << endl;
	//cout << "1.easy " << endl;
	//cout << "2.normal " << endl;
	//cout << "3.difficult " << endl;

	//int select = 0;//创建选择结果的变量
	//	cin >> select;

	//	switch (select)
	//	{
	//	case 1:
	//		cout << "easy " << endl;
	//		break;
	//	case 2:
	//		cout << "normal " << endl;
	//		break;
	//	case 3:
	//		cout << "difficult " << endl;
	//		break;
	//	default:
	//		cout << "no this kind " << endl;
	//		break;
	//	}

	//2.出现在循环语句，跳出当前循环
	//for (int i = 1; i < 10; i++)
	//{
	//	if (i == 5)
	//	{
	//		break;
	//	}
	//	cout << i << endl;
	//}

	//3.出现在嵌套语句，跳出最近的内层循环语句

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)//j<10,实际是j<=5
		{
			if (j == 5)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
