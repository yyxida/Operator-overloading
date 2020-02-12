#include<iostream>

using namespace std;

class Preson
{

public:
	//成员函数重载加号
	Preson operator+(Preson& p)
	{
		Preson temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}
	int m_a;
	int m_b;

};
//全局函数重载加号
//Preson operator+(Preson& p1, Preson& p2)
//{
//	Preson temp;
//	temp.m_a = p1.m_a + p2.m_a;
//	temp.m_b = p1.m_b + p2.m_b;
//	return temp;
//}
void test01()
{
	Preson p1;
	Preson p2;
	p1.m_a = 10;
	p1.m_b = 10;
	p2.m_a = 10;
	p2.m_b = 10;
	//成员函数重载加号的本质
	//Preson p3 = p1.operator+(p2);
	//全局函数重载加号的本质
	//Preson p3 = operator+(p1, p2);
	Preson p3 = p1 + p2;
	cout << "p3.m_a=" << p3.m_a << endl;
	cout << "p3.m_b=" << p3.m_b << endl;
}

int main(void)
{
	test01();

}
