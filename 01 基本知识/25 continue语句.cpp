#include<iostream>
using namespace std;

int main()
{
	//continue 跳过本次循环余下尚未执行的语句，继续执行下一次循环
	for (int i = 0; i < 101; i++)
	{
		//奇数输出
		if (i % 2 == 0)
		{
			continue;//continue与它外部下面的代码不再执行
			//break，直接退出for循环
		}
		cout << "i = " << i << endl;
	}

	system("pause");
	return 0;
}
