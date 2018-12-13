#include<iostream>
#include<string>
#include "Graduate.h"
using namespace std;

Graduate::Graduate(char* na, char* num, int sc, char* re, char* adv)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(number, num);
	score = sc;
	strcpy(researchTopic, re);
	strcpy(advisor, adv);

}
Graduate::Graduate(const Graduate &gra)
{
	if (gra.name)
	{
		name = new char[strlen(gra.name) + 1];
		strcpy(name, gra.name);
	}
	strcpy(number, gra.name);
	score = gra.score;
	strcpy(researchTopic, gra.researchTopic);
	strcpy(advisor, gra.advisor);
	/*
	name[10] = *gra.name;
	number[10] = *gra.number;
	score = gra.score;
	researchTopic[50] = *gra.researchTopic;
	advisor[10] = *gra.advisor;
	*/
}

Graduate::~Graduate()
{
	cout << "disCon" << endl;
	if (name)
		delete[] name;
}
void Graduate::Input()
{
	cout << "请输入信息\n";
	char na[10];
	cout << "输入姓  名：";
	cin >> na;
	if (name)
		delete []name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入学  号：";
	cin >> number;
	int sc;
	cout << "输入成绩:";
	cin >> sc;
	cout << "输入研究领域：";
	cin >> researchTopic;
	cout << "输入指导老师";
	cin >> advisor;
}
void Graduate::Output1()
{
	cout << "该研究生信息如下" << endl;
	cout << "姓  名：" << name << endl;
	cout << "学  号：" << number << endl;
	cout << "成绩：" << score << endl;
	cout << "研究领域" << researchTopic[50] << endl;
	cout << "指导老师" << advisor[10] << endl;
}
void Graduate::Output2()
{
	cout << "该研究生信息如下" << endl;
	cout << "姓  名：" << name << endl;
	cout << "学  号：" << number << endl;
	cout << "成绩：" << score << endl;
	cout << "研究领域" << researchTopic[50] << endl;
	cout << "指导老师" << advisor[10] << endl;
}