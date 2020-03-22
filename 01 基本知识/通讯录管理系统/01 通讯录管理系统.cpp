
//封装函数显示页面
//在main函数中调用封装好的函数
#include<iostream>
using namespace std;
#include<string>
#define Max 1000

//设计联系人结构体
struct Person
{
	//姓名
	string m_Name;
	//性别
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Sddr;
};

//设计通讯录结构体
struct Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[Max];

	//当前联系人个数
	int m_Size;
};

//菜单页面
void showmenu()
{
	cout << "*******************************" << endl;
	cout << "*****  1.add  a contacts  *****" << endl;
	cout << "*****  2.show   contacts  *****" << endl;
	cout << "*****  3.delete contacts  *****" << endl; 
	cout << "*****  4.find   contacts  *****" << endl;
	cout << "*****  5.modify contacts  *****" << endl;
	cout << "*****  6.empty  contacts  *****" << endl;
	cout << "*****  0.     exit        *****" << endl;
	cout << "*******************************" << endl;
}


//添加联系人
void addPerson(struct Addressbooks * abs)
{
	//先判断通讯录是否满，满了就不再添加
	if (abs->m_Size == Max)
	{
		cout << "full ,can't add!" << endl;
		return;
	}
	else
	{
		//添加具体联系人

		//姓名
		{
			string name;
			cout << "please give a name:" << endl;
			cin >> name;
			abs->personArray[abs->m_Size].m_Name = name;
		}

		//性别
		{
			cout << "sex:" << endl;
			cout << "1--male" << endl;
			cout << "2--female" << endl;
			int sex = 0;
		
			while (true)
			{
				//如果是1或者2退出循环，否则重新输入
				cin >> sex;
				if (sex == 1 || sex == 2)
				{
					abs->personArray[abs->m_Size].m_Sex = sex;
					break;
				}
				else
				{
					cout << "error,try again" << endl;
				}
			}
		}
		
		
		//年龄
		{
			cout << "please input age:" << endl;
			int age = 0;
			while (true)
			{
				//判断年龄合理区间，否则重新输入
				cin >> age;
				if (age > 5 && age < 99)
				{
					abs->personArray[abs->m_Size].m_Age = age;
					break;
				}
				else
				{
					cout << "error,try again" << endl;
				}
			}
		}
		
		
		//电话
		{
			cout << "please input phone number:" << endl;
			string number = "0";
			while (true)
			{
				//判断号码长度是否有效，否则重新输入
				cin >> number;
			//	int length = 0;
			//	cout << "length :" << length = number.length << endl;
				if (1)
				{
					abs->personArray[abs->m_Size].m_Phone  = number;
					break;
				}
				else
				{
					cout << "length error,try again" << endl;
				}
			}
		}

		//住址
		{
			string adress;
			cout << "please input adress:" << endl;
			cin >> adress;
			abs->personArray[abs->m_Size].m_Sddr = adress;
		}

		//更新通讯录人数
		abs->m_Size++;

		cout << "add successfully" << endl;

		system("pause");
		system("cls");

	}
}

//显示联系人，通讯录人员为零 提示为空，否则显示信息
void showPerson(struct Addressbooks * abs)
{
	//首先判断人数是否为零，为零，提示为空
	if (abs->m_Size == 0)
	{
		cout << "jiluweikong" << endl;
	}
	//else显示记录
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "name:"<< abs->personArray[i].m_Name<<"\t";
			cout << "age:"<< abs->personArray[i].m_Age<<"\t";
			cout << "sex:"<< (abs->personArray[i].m_Sex ==1? "male":"female")<<"\t";
			cout << "phone:"<< abs->personArray[i].m_Phone<<"\t";
			cout << "aderss:"<< abs->personArray[i].m_Sddr << endl;
		}
	}
	system("pause");
	system("cls");//清屏

}

//检测联系人是否存在，如果存在，返回联系人在数组位置，不存在返回-1
//参数1 通讯录 ，参数二查找姓名
int isExit(struct Addressbooks * abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;//找到，返回这个人在数组中的下标编号
		}
	}
	return -1;//遍历结束未找到，返回-1
	
}

//删除指定联系人
void deletePerson(struct Addressbooks* abs)
{
	cout<<"nixiangshanshei"<<endl;
	string name;
	cin >> name;

	//ret ==-1 未查到，！=-1查到
	int ret = isExit(abs, name);//在这里，abs被定义为struct Addressbooks* abs类型，形参，这行abs就代表实参中&abs

	//删除
	//数据覆盖，后一个人的数据覆盖到前一个人身上并且将通讯录中记录的人员个数减一
	if (ret != -1)
	{
		//
		for (int i = ret; i < abs->m_Size; i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		cout << "shanchuchenggou" << endl;
		abs->m_Size--;
	}
	else
	{
		cout << "wuciren" << endl;
	}

	system("pause");
	system("cls");

}

//查找联系人
void findPerson(struct Addressbooks* abs)
{
	cout << "who are you looking for?" << endl;
	string name;
	cin >> name;
	
	//判断是否存在
	int ret = isExit(abs, name);
	
	if (ret != -1)
	{
		cout << "name:" << abs->personArray[ret].m_Name << "\t";
		cout << "age:" << abs->personArray[ret].m_Age << "\t";
		cout << "sex:" << (abs->personArray[ret].m_Sex == 1 ? "male" : "female") << "\t";
		cout << "phone:" << abs->personArray[ret].m_Phone << "\t";
		cout << "aderss:" << abs->personArray[ret].m_Sddr << endl;
	}
	else
	{
		cout << "no person of the name" << endl;
	}
	system("pause");
	system("cls");
}

//修改联系人
void modifyPerson(struct Addressbooks* abs)
{
	cout << "please enter the contact you want to modify:" << endl;
	string name;
	cin >> name;
	int ret;
	ret = isExit(abs, name);
	if (ret != -1)
	{
		//姓名
		string name;
		cout << "please enter the name:" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//性别
		cout << "please enter gender:" << endl;
		cout << "1---male" << endl;
		cout << "2---female" << endl;
		int sex=0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "error,try again" << endl;
		}
		
		//年龄
		cout << "please enter age:" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//电话
		cout << "please enter phonenumber:" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//住址
		cout << "please enter aderss:" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Sddr = address;
		cout << "modify successfully" << endl;
	}

	else
	{
		cout << "no person of the name" << endl;
	}

	//清屏
	system("pause");
	system("cls");
}

//清空联系人
void cleanPerson(struct Addressbooks* abs)
{
	abs->m_Size = 0;//联系人数量 逻辑清空
	cout << "alreayd empty!" << endl;

	system("pause");
	system("cls");
}


int main()
{
	//创建通讯录结构体变量
	struct Addressbooks abs;
	//初始化人员个数
	abs.m_Size = 0;



	int select = 0;//创建用户选择的数字

	while (true)
	{
		//1.显示菜单
		showmenu();

		cin >> select;

		switch (select)
		{
		case 1://1.add  a contacts
			addPerson(&abs);//利用地址传递可以修改实参
			break;
		case 2://2.show   contacts
			showPerson(&abs);
			break;
		case 3://3.delete contacts
		
		/*	//验证是否有此人
		{	cout << "input delete name:" << endl;
			string name;
			cin >> name;

			if (isExit(&abs, name) == -1)
			{
				cout << "don't have this people" << endl;
			}
			else
			{
				cout << "have" << endl;
				//cout << "number:" << abs.m_Size << endl;
			}
		}	*/
			deletePerson(&abs);

		
			break;
		
		case 4://4.find   contacts
			findPerson(&abs);
			break;
		case 5://5.modify contacts
			modifyPerson(&abs);
			break;
		case 6://6.empty  contacts
			cleanPerson(&abs);
			break;
		case 0://0.     exit      
			cout << "see you next time" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}