template<class T1, class T2>
person<T1, T2>::person(T1 name, T2 age)
{
	this->m_age = age;
	this->m_name = name;
}

//成员函数类外实现
template<class T1, class T2>
void person<T1, T2>::showperson()
{
	cout << "name : " << this->m_name << endl;
	cout << "age : " << this->m_age << endl;
}
