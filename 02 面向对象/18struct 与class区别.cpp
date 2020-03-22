#include<iostream>
using namespace std;
//在 C++中唯一区别
//struct 默认权限公有
//class  默认权限私有

//默认私有
class C1
{
	int m_A1;

};

//默认公共
struct C2
{
	int m_A2;
};

int main()
{
	C1 c1;
	//c1.m_A = 100;//默认私有权限
	
	C2 c2;
	c2.m_A2 = 100;

	system("pause");
	return 0;
}
