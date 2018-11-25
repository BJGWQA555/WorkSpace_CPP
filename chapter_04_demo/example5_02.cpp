//example5_02.cpp:对象成员构造函数参数的传递
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
		A a1, a2;									//有两个对象成员，B类包含了A类
		int y;
	public:
		B(int a, int b, int c): a2(b), a1(a)		//注意：初始化列表中是成员对象名a1、a2，而不是类名A
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
