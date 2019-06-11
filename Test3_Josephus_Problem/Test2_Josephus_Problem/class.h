#include <iostream>
using namespace  std;
//------------------��child�ࡿ-----------------------------------
class Child             //1.����С���ѽڵ���
{
	public:
		int childNo;         //��ǰС���ı��
		Child* leftchild;    //��¼С����������ھ�
		Child* rightchild;   //��¼С����������ھ�
	public:
		Child(int id = 0) 	  //���캯��
		{
			childNo = id;
			leftchild = NULL;
			rightchild = NULL;
		}
};
//-------------------��Circle�ࡿ----------------------------------
class Circle					// ����ԲȦ��Ϸ��
{
	public:
		int scale;             //��ǰ-���ڲ�����Ϸ������
		Child children[1000];  //���-������Ϸ��С������
	public:
		Circle(int num = 1000) // ��Ĭ��ֵ���캯������ʼ��С���ڵ�
		{
			scale = num;
			for (int i = 0; i < num; i++)
			{
				children[i] = Child(i);
			}
		};
	//�����ڵ��ѭ����������ȷ��ÿ��С���������ھ�
	void Build()
	{
		for (int i = 0; i < scale; i++)
		{/*��ͬѧ�����б�дѭ�������Ĵ���*/
			if (i==0)
			{
				children[i].rightchild = &children[i + 1];
				children[i].leftchild= &children[scale-1];
			}
			else if (i==scale-1)
			{
				children[i].rightchild = &children[0];
				children[i].leftchild = &children[i - 1];
			}
			else
			{
				children[i].rightchild = &children[i + 1];
				children[i].leftchild= &children[i - 1];
			}
		}
	}
	//��Ϸ���к������ӵ�ǰ�ڵ�˳ʱ��ѭ����ʼ��num����
	void Run(int T)
	{
		int k;
		cout << "�ӵڼ���С����ʼ��Ϸ����������(k<109)��" << endl;
		cin >> k;
		int count = 0;
		Child* current = &children[k];
		while (scale > 1)
		{
			count++;
			//Quit the circle��С���˳���ǰԲȦ
			if (count == T)
			{   /*��ͬѧ�����������*/
				//current = (*current).rightchild;
				(*current).rightchild->leftchild = (*current).leftchild;
				(*current).leftchild->rightchild = (*current).rightchild;
				cout << "childen[" << current->childNo << "]���޳�" << endl;
				current = (*current).rightchild;
				count = 0;
				scale--;
				//delete
			}		//if else֮����ν���ע��
			else  //Count the next������������Ϸ	            		
			{	/*��ͬѧ��������ɴ���*/
				current = (*current).rightchild;
			}
		}
		cout << "The last child id is " << current->childNo << endl;
	}
};