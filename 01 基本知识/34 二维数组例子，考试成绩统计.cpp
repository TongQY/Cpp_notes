#include<iostream>
using namespace std;
#include<string>

int main()
{
	//				语文			数学			英语
	//	张三			100			100			100
	//	李四			90			50			100
	//	王五 		60			70			80


	//1.创建二维数组  a[3][3]
	//2.每行三列相加统计总成绩   嵌套循环

	int arr[3][3] =
	{
		{100, 100,100},
		{ 90,50,100 },
		{ 60,70,80 },
	};

	string names[3] = { "zhsan","lisi","wangwu" };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j <= 2; j++)
		{
			sum += arr[i][j];
			//cout << "arr" << "[" << i << "]" << "[" << j << "]" << " =" << arr[i][j]<<"\t";
		}
		cout << endl;
		cout << names[i] << "\t" << " sum  score = " << sum << endl;
		cout << endl;
	}

	system("pause");

	return 0;
}
