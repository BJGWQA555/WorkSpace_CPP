#define _CRT_SECURE_NO_WARNINGS
//学生类的实现
#include <iostream>
#include "example3_26_student.h"
#include <cstring>
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1]; //避免浅拷贝
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
}

Student::Student(const Student &per) //拷贝构造函数，在此例中暂时，没有用到
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(ID, per.ID);
		strcpy(speciality, per.speciality);
		age = per.age;
	}
}

Student::~Student()
{
	if (name)
	{
		delete[] name;
	}
}

char *Student::GetName()
{
	return name;
}
char *Student::GetID()
{
	return ID;
}

int Student::GetAge()
{
	return age;
}

char *Student::GetSpec()
{
	return speciality;
}

char *Student::GetNumber()
{
	return number;
}

void Student::Display()
{
	cout << "姓名:" << name << endl;
	cout << "身份证：" << ID << endl;
	cout << "学号" << number << endl;
	cout << "专业" << speciality << endl;
	cout << "年龄" << age << endl
		 << endl;
}

void Student::Input()
{
	char na[10];
	cout << "输入姓名";
	cin >> na;
	if (name)
		delete[] name;
	name = new char[strlen(na) + 2];
	strcpy(name, na);
	cout << "输入身份证:";
	cin >> ID;
	cout << "输入年龄:";
	cin >> age;
	cout << "输入专业:";
	cin >> speciality;
	cout << "输入学号:";
	cin >> number;
}
