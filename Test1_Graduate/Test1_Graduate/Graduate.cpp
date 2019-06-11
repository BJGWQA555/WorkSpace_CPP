#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include <cstdarg>
#include "Graduate.h"
using namespace std;

Graduate::Graduate()
{}
Graduate::Graduate(char* na, char* num, int sc, char* rt, char* adv)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		//name = na;异常
		strcpy(name, na);
	}
	strcpy(number, num);
	score = sc;
	strcpy(researchtopic, rt);
	strcpy(advisor, adv);
}
Graduate::Graduate(const Graduate &gra)
{
	cout << "调用拷贝构造函数" << endl;
	if (gra.name)
	{
		name = new char[strlen(gra.name) + 1];
		strcpy(name, gra.name);
	}
	strcpy(number, gra.number);
	score = gra.score;
	strcpy(researchtopic, gra.researchtopic);
	strcpy(advisor, gra.advisor);
	//name[10] = *gra.name;				存在问题，但可在运行中忽略
	//number[10] = *gra.number;
	//score = gra.score;
	//researchTopic[50] = *gra.researchTopic;
	//advisor[10] = *gra.advisor;
}

Graduate::~Graduate()
{
	cout << "disCon析构函数" << endl;
	if (name)
		delete[] name;									//触发异常Test1_Graduate.exe 已触发了一个断点。 
}
void Graduate::ptintfre()								//void+
{                                                                                               
	cout << advisor << endl;
}
void Graduate::OutputInfo()
{
	cout << "该研究生信息如下" << endl;
	cout << "姓  名：" << name << endl;
	cout << "学  号：" << number << endl;
	cout << "成  绩：" << score << endl;
	cout << "研究领域:" << researchtopic << endl;		//加50
	cout << "指导老师:" << advisor << endl;				//add [10],error 
}
void OutputAversco(Graduate* arry,int num)
{
	int sum;
	sum = 0; num = 0;
	for(int i=0;i<num;i++)
		if ((*array).score)
		{

		}

	cout << "多个研究生的平均成绩:" << sum / num << endl;
}
void Grade(Graduate gra)
{
	if (gra.score >= 90)
		cout << "A" << endl;
	else if (gra.score >= 80)
		cout << "B" << endl;
	else if (gra.score >= 70)
		cout << "C" << endl;
	else
		cout << "D" << endl;
}
Graduate & Graduate::operator = (const Graduate &gra)//新增加的重载赋值运算符的定义
{
	if (name) delete[]name;
	if (gra.name)
	{
		name = new char[strlen(gra.name) + 1];
		strcpy(name, gra.name);
		strcpy(number, gra.name);
		score = gra.score;
		strcpy(researchtopic, gra.researchtopic);
		strcpy(advisor, gra.advisor);
	}
	else
		name = 0;								//
	return *this;
}











void Graduate::Input()
{
	cout << "请输入信息\n";
	char na[10];
	cout << "输入姓  名：";
	cin >> na;
	if (name)
		delete[]name;
	//name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入学  号：";
	cin >> number;
	int sc;
	cout << "输入成绩:";
	cin >> sc;
	cout << "输入研究领域：";
	cin >> researchtopic;
	cout << "输入指导老师";
	cin >> advisor;
}
