#include<iostream>
#include "Graduate.h"
using namespace std;
const int N = 10;

void menu();
int SearchStu(Graduate *array, char *na);
void InputStu(Graduate *array);

int count = 0;

int main()
{
	Graduate array[N];
	int choice;

	do
	{
		menu();
		cout << "Please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <=2)
			switch (choice)
			{
			case 1:InputStu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
					cout << "查无此人！\n";
				else
					array[i].Display();
			case 3:
				OutputAversco(array,N);
				break;
			default:break;
			}
	} while (choice);
	return 0;
}


void menu()
{
	cout << "**********1.录入信息**********" << endl;
	cout << "**********2.查询信息**********" << endl;
	cout << "**********0.退    出**********" << endl;
}


void InputStu(Graduate *array)                //输入对象数组元素
{
	char ch;
	do
	{
		array[count].Input();
		count++;
		cout << "继续输入吗？(Y or N )" << endl;
		cin >> ch;
	} while (ch == 'Y');
}
