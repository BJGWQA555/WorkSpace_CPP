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
		//name = na;�쳣
		strcpy(name, na);
	}
	strcpy(number, num);
	score = sc;
	strcpy(researchtopic, rt);
	strcpy(advisor, adv);
}
Graduate::Graduate(const Graduate &gra)
{
	cout << "���ÿ������캯��" << endl;
	if (gra.name)
	{
		name = new char[strlen(gra.name) + 1];
		strcpy(name, gra.name);
	}
	strcpy(number, gra.number);
	score = gra.score;
	strcpy(researchtopic, gra.researchtopic);
	strcpy(advisor, gra.advisor);
	//name[10] = *gra.name;				�������⣬�����������к���
	//number[10] = *gra.number;
	//score = gra.score;
	//researchTopic[50] = *gra.researchTopic;
	//advisor[10] = *gra.advisor;
}

Graduate::~Graduate()
{
	cout << "disCon��������" << endl;
	if (name)
		delete[] name;									//�����쳣Test1_Graduate.exe �Ѵ�����һ���ϵ㡣 
}
void Graduate::ptintfre()								//void+
{                                                                                               
	cout << advisor << endl;
}
void Graduate::OutputInfo()
{
	cout << "���о�����Ϣ����" << endl;
	cout << "��  ����" << name << endl;
	cout << "ѧ  �ţ�" << number << endl;
	cout << "��  ����" << score << endl;
	cout << "�о�����:" << researchtopic << endl;		//��50
	cout << "ָ����ʦ:" << advisor << endl;				//add [10],error 
}
void OutputAversco(Graduate* arry,int num)
{
	int sum;
	sum = 0; num = 0;
	for(int i=0;i<num;i++)
		if ((*array).score)
		{

		}

	cout << "����о�����ƽ���ɼ�:" << sum / num << endl;
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
Graduate & Graduate::operator = (const Graduate &gra)//�����ӵ����ظ�ֵ������Ķ���
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
	cout << "��������Ϣ\n";
	char na[10];
	cout << "������  ����";
	cin >> na;
	if (name)
		delete[]name;
	//name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "����ѧ  �ţ�";
	cin >> number;
	int sc;
	cout << "����ɼ�:";
	cin >> sc;
	cout << "�����о�����";
	cin >> researchtopic;
	cout << "����ָ����ʦ";
	cin >> advisor;
}
