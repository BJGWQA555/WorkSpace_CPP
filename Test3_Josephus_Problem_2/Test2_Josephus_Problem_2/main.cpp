#include <iostream>
#include "class.h"
using namespace std;

//----------------------------������----------------------------------
int main()
{
	Circle nodes(108); // ԲȦ������108���ڵ����С����

	nodes.Build();

	nodes.Run(8);      // ��ʼѭ����������8������Ϸ��������Ļ�ʤ��

	system("pause");

	return 0;
}
