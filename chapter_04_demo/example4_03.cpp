#include <iostream>
#include <windows.h>

using namespace std;
#include "example4_03_circle.h"
#include "example4_03_circle.cpp"

int main()
{
	circle c1(3.5), c2;
	cout << "area of c1=" << c1.area() << ",circumference of c1 =" << c1.circumference() << endl;
	cout << "area of c2=" << c2.area() << ",circumference of c2 =" << c2.circumference() << endl;
	system("pause");
	return 0;
}
/****
Q:1.将构造函数改为
circle(double r = 0) 				//报错：expression must be a modifiable lvalue
	{
		PI=3.1415926;
		radius = r;
	}	
  2.将example4_03_circle.cpp的成员函数area实现代码第一行加入PI=3.14；
A:1.expression must be a modifiable lvalue。常数据成员只能通过初始化列表初始化。
  2.expression must be a modifiable lvalue。常数据成员不可被修改。
****/