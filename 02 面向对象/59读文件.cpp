/*
程序运行产生的数据都属于临时数据，程序一旦运行结束都会释放

通过文件可将数据持久化
c++中对文件操作需要包含头文件<fstream>*/

#include<iostream>
using namespace std;
#include<string>
//1.头文件包含
#include <fstream>

void test01()
{
	//2.创建流对象  
	ifstream ifs;
	//3.打开文件 判断是否打开成功
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "打开失败" << endl;
		return;
	}
	//4.读数据
	//(1).
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	//(2).
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}
	//(3.)
	/*string buf;

	while(getline(ifs,buf))
	{
		cout << buf << endl;
	}

	//(4)
	//char c;
	//while ((c = ifs.get()) != EOF)//eof end of file
	//{
	//	cout << c;//不能加endl
	//}*/
	
	//5.关闭文件
	ifs.close();
}

int main()
{
	test01();
	system("pause");
	return 0;
}
