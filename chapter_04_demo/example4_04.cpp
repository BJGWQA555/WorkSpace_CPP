//第3个文件:example4_04.cpp: 定义主函数,定义对象并调用相应函数.
#include <iostream>                   
#include <windows.h>
using namespace std;
#include "example4_04_Circle.h"
//#include "example4_04_Circle.cpp"                    
int main( )
{
	 Circle c1(3.5),c2;                 //定义类的两个对象，c2的半径用默认值
     cout<<"radius of c1="<<c1. GetRadius ();
	 cout<<" , area of c1="<<c1.Area()<<" , circumference of c1="<<c1.Circumference()<<endl;
     cout<<"radius of c2="<<c2. GetRadius ();
	 cout<<" , area of c2="<<c2.Area()<<" , circumference of c2="<<c2.Circumference()<<endl;
	 system("pause");
	 return 0;
}
