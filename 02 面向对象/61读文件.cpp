#include<iostream>
using namespace std;

#include<fstream>
class person
{
public:

	char m_name[64];
	int m_age;
};

void test1()
{
	//1.包含

	//2.创建流对象
	ifstream ifs;
	//3.打开
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "dakaishibai" << endl;
		return;
	}

	//4.读文件
	person p;

	ifs.read((char*)&p, sizeof(person));
	
	cout << "" << p.m_name << endl;
	cout << "" << p.m_age << endl;
	//5.关闭文件
	ifs.close();
}

int main()
{
	test1();
	system("pause");
	return 0;
}