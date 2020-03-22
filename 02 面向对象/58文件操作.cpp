/*
程序运行产生的数据都属于临时数据，程序一旦运行结束都会释放

通过文件可将数据持久化
c++中对文件操作需要包含头文件<fstream>

文件类型分为两种 
1.文本文件-文件以文本的ASCII码形式存储在计算机中
2.二进制文件 文件以文本的二进制形式存储在计算机中，
ofstream 写操作
ifstream 读操作
fstream  读写操作
*/

#include<iostream>
using namespace std;
#include <fstream>//头文件包含*/

void test01()
{
	//1.包含头文件  fstream

	//2.创建流对象

	ofstream ofs;

	//3.指定打开方式
	ofs.open("test.txt", ios::out);

	//4.写内容
	ofs << "name:zhangsan" << endl;
	ofs << "sex:nan" << endl;
	ofs << "age:18" << endl;
	//ofs << "name:zhangsan" << endl;

	//5.关闭文件
	ofs.close();
}

int main()
{
	test01();
	system("pause");
	return 0;
}
