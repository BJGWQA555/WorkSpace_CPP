//// example2_02_method1：两种符号常量定义方法的区别, 方法2：用宏定义
//
//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//int main()
//{
//	int x = 5;
//
//#define  T1  x+x    		//用宏定义定义符号常量T1
//
//#define  T2  T1-T1  		//用宏定义定义符号常量T2		//	T2=5+5-5+5=10
//							//#define  T2  (T1)-(T1)	//	T2=0
//	cout << "T1=" << T1 << "  T2=" << T2 << endl;
//	system("pause");
//	return 0;
//}
