#include<iostream>
using namespace std;

/*电脑主要组成部件为 CPU（用于计算），显卡（用于显示），内存条（用于存储）

将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商

创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口

测试时组装三台不同的电脑进行工作*/

//cpu 类
class cpu
{
public:
	virtual void calculate() = 0;
};

//显卡类
class xianka
{
public:
	virtual void display() = 0;
};

//内存类
class neicun
{
public:
	virtual void storage() = 0;
};

//intel 厂商
class intelcpu:public cpu
{
public:
	virtual void calculate()
	{
		cout << "intel cpu" << endl;
	}

};
class intelxianka: public xianka
{
public:
	virtual void display()
	{
		cout << "intel xianka" << endl;
	}
};
class intelneicun :public neicun
{
public:
	virtual void storage()
	{
		cout << "intel neicun" << endl;
	}
};

class lenovecpu :public cpu
{
public:
	virtual void calculate()
	{
		cout << "lenove cpu" << endl;
	}

};
class lenovexianka :public xianka
{
public:
	virtual void display()
	{
		cout << "lenove xianka" << endl;
	}
};
class lenoveneicun :public neicun
{
public:
	virtual void storage()
	{
		cout << "lenove neicun" << endl;
	}
};

class pc
{
public:
	pc(cpu* cp,xianka* xk,neicun* nc)
	{
		m_cpu = cp;
		m_xianka=xk;
		m_neicun =nc;
	}
	void dowork()
	{
		//调用接口
		m_cpu->calculate();
		m_xianka->display();
		m_neicun->storage();
	}
	//提供析构函数 释放三个电脑零件
	~pc()
	{
		if(m_cpu!=NULL)
		{ 
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_xianka != NULL)
		{
			delete m_xianka;
			m_xianka = NULL;
		}

		if (m_neicun != NULL)
		{
			delete m_neicun;
			m_neicun = NULL;
		}
	}
private:

	cpu* m_cpu;
	xianka* m_xianka;
	neicun* m_neicun;
};



void test01()
{
	cpu* inte = new intelcpu;
	xianka* xiank = new intelxianka;
	neicun* neic = new lenoveneicun;

	pc* wodediannao = new pc(inte,xiank,neic);

	wodediannao->dowork();

	delete wodediannao;


	cout << "---------------------------------------------"<<endl;

	cpu* nte = new intelcpu;
	xianka* xank = new lenovexianka;
	neicun* nic = new lenoveneicun;

	pc* wodediannao2 = new pc(nte, xank, nic);

	wodediannao2->dowork();

	delete wodediannao2;


	cout << "---------------------------------------------"<<endl;

	cpu* len = new lenovecpu;
	xianka* xink = new intelxianka;
	neicun* nec = new lenoveneicun;

	pc* wodediannao3 = new pc(len, xink, nec);

	wodediannao3->dowork();

	delete wodediannao3;
}


int main()
{
	test01();
	system("pause");
	return 0;
}