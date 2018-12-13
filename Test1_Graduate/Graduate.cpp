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
	cout << "��������Ϣ\n";
	char na[10];
	cout << "������  ����";
	cin >> na;
	if (name)
		delete []name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "����ѧ  �ţ�";
	cin >> number;
	int sc;
	cout << "����ɼ�:";
	cin >> sc;
	cout << "�����о�����";
	cin >> researchTopic;
	cout << "����ָ����ʦ";
	cin >> advisor;
}
void Graduate::Output1()
{
	cout << "���о�����Ϣ����" << endl;
	cout << "��  ����" << name << endl;
	cout << "ѧ  �ţ�" << number << endl;
	cout << "�ɼ���" << score << endl;
	cout << "�о�����" << researchTopic[50] << endl;
	cout << "ָ����ʦ" << advisor[10] << endl;
}
void Graduate::Output2()
{
	cout << "���о�����Ϣ����" << endl;
	cout << "��  ����" << name << endl;
	cout << "ѧ  �ţ�" << number << endl;
	cout << "�ɼ���" << score << endl;
	cout << "�о�����" << researchTopic[50] << endl;
	cout << "ָ����ʦ" << advisor[10] << endl;
}