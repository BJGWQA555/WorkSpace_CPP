//example5_02.cpp:�����Ա���캯�������Ĵ���
#include<iostream>
#include <Windows.h>
using namespace std;

class A
{
	private:
		int x;
	public:
		A(int a)
		{
			x = a;
			cout << "A: x = " << a << endl;
		}
};

class B
{
	private:
		A a1, a2;									//�����������Ա��B�������A��
		int y;
	public:
		B(int a, int b, int c): a2(b), a1(a)		//ע�⣺��ʼ���б����ǳ�Ա������a1��a2������������A
		{
			y = c;
			cout << "B: y = " << c << endl; 
		}
};
int main( )
{
		B obj(10, 20, 30);						    //x=10,x=20,y=30
		system("pause");
		return 0;
}
