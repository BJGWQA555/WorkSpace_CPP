#include <iostream>
#include "class.h"
using namespace std;

//----------------------------主函数----------------------------------
int main()
{
	Circle nodes(108); // 圆圈类内有108个节点对象（小孩）

	nodes.Build();

	nodes.Run(8);      // 开始循环运行数“8”的游戏，输出最后的获胜者

	system("pause");

	return 0;
}
