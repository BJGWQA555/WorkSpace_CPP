#include <iostream>
using namespace  std;
/*
（3）项目三：设计一个组合类解决经典约瑟夫环问题（50分）难度系数★★★★★
约瑟夫环问题描述：已知num个小孩（以编号1，2，3...num分别表示）围坐在一张圆桌周围。
从编号为k的人开始从1顺次报数，数到T的那个人出列；他的下一个人又从1开始报数，后面顺次数到T的那个人又出列；
依此规律重复下去，直到圆桌周围的人全部出列,试计算最后出列的那个小孩的编号。
要求：基于双向循环链表（下图）和面向对象的程序设计方法完成本程序。
*/

//1.定义小朋友节点类
class Child
{
	public:
		int childNo;         //当前小孩的编号
		Child* leftchild;    //记录小孩对象的左邻居
		Child* rightchild;   //记录小孩对象的右邻居
	public:
		//构造函数
		Child(int num = 0)
		{
			childNo = num;
			leftchild = NULL;
			rightchild = NULL;
		}
};

//2.定义圆圈游戏类
class Circle
{
	public:
		int scale;  			//当前正在参与游戏的人数
		Child children[1000];
	public:
		//  1构造函数：初始化每个小孩对象节点的编号
		Circle(int num = 1000)
		{
			scale = num;
			for (int i = 0; i < num; i++)
			{
				children[i] = Child(i);		//0
			}
		};

		//  2构建节点的循环链表函数：确立每个小孩的左右邻居
		void Build()
		{
			for (int i = 0; i < scale; i++)
			{
				if (i == 0)
				{
					children[i].rightchild = &children[i + 1];
					children[i].leftchild = &children[scale - 1];
				}
				else if (i == (scale - 1))
				{
					children[i].rightchild = &children[0];
					children[i].leftchild = &children[i - 1];
				}
				else
				{
					children[i].rightchild = &children[i + 1];
					children[i].leftchild = &children[i - 1];
				}
			}
		}
		//  3游戏运行函数：从当前节点顺时针循环开始数T个数
		void Run(int T)
		{
			int k;
			cout << "从第几个小孩开始游戏，请输入编号(k<109)：" << endl;
			cin >> k;
			int count = 1;
			Child* current = &children[k];
			while (scale > 1)
			{
				//quit the circle
				if (count == T)
				{
					// 当前数到T的小孩退出游戏，参与游戏人数减少1个
					scale --;
					
					//把当前的这个小孩的左右邻居用链表连接起来
					current->leftchild->rightchild = current->rightchild;
					current->rightchild->leftchild = current->leftchild;
					current = current->rightchild;
					count = 1;
				}
				else  //count the next	            		
				{
					count = count + 1;
					current = current->rightchild;
				}
			}
			cout << "The last child id is " << current->childNo << endl;
		}
};

int main()
{

	Circle nodes(5);	// 圆圈类内有100个节点对象（小孩）

	nodes.Build();

	nodes.Run(3);		// 开始循环运行数“7”的游戏，输出最后的获胜者

	system("pause");
	return 0;

}