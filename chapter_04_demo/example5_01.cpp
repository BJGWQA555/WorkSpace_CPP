//example5_01.cpp:�����Ա�Ĺ���������
#include<iostream>
#include <Windows.h>
using namespace std;
class A
{
	public:
		A()
		{
			cout << "����A" << endl;
		}
		~A()
		{
			cout << "����A" << endl;
			getchar();						//���getchar(),����ʾ���
		}
};
class B
{
	public:
		B( )
		{
			cout << "����B" << endl; 
		}
		~B( )
		{
			cout << "����B" << endl; 
			getchar();						//���getchar(),����ʾ���
		}
	private:
			A a;                            //�����Ա��B�������A��
};
int main( )
{
		B  obj;
		system("pause");
		return 0;
}
