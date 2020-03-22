#include<iostream>
using namespace std;

#include<fstream>

class person
{
public:

	char m_name[64];
	int m_age;
};

void test()
{
	//1.包含头文件

	//2.创建流对象
	ofstream ofs;
	//3.打开文件
	ofs.open("person.txt", ios::out | ios::binary);
	//4.写文件
	person p{ "zhangsan",18 };
	ofs.write((const char*)&p, sizeof(person));
	cout<<"succeed"<<endl;
	//5.关闭文件
	ofs.close();

}

int main()
{
	test();
	system("pause");
	return 0;
}

