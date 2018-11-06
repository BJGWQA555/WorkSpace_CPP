//#pragma once		//ͷ�ļ�ֻ����һ��
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
class CCat
{
  public:
	CCat(const string &name);
	~CCat();
	string name; //����
	int food;	//ʳ��
	int water;   //ˮ
	int weight;  //����
	int age;	 //����
	//��������г�����ĺ��������������������
	void talk();
	void eat(int food);
	void drink(int water);
	void sleep(int hours);
	void sport(int hours);
};
CCat::CCat(const string &name)
{
	this->name = "MaoMi";
	food = 0;
	water = 0;
	weight = 80;
	age = 0;
}

CCat::~CCat()
{
}

void CCat::talk()
{
	cout << "Miao~Wu, I am " << name << "." << endl;
	cout << name << " age is " << age << endl;
	cout << name << " weight is " << weight << endl;
	cout << name << " food is " << food << endl;
	cout << name << " water is " << water << endl;
}

void CCat::eat(int f)
{
	food += f;
}

void CCat::drink(int w)
{
	water += w;
}
void CCat::sleep(int hours)
{
	food -= 1 * hours;
	water -= 1 * hours;
	weight += 1 * hours;

	if (food < 0)
	{
		weight += food;
		food = 0;
	}

	if (water < 0)
	{
		weight += water;
		water = 0;
	}
	age += hours;
}
void CCat::sport(int hours)
{
	food -= 3 * hours;
	water -= 3 * hours;
	weight += 1 * hours;

	if (food < 0)
	{
		weight += food;
		food = 0;
	}
	if (water < 0)
	{
		weight += water;
		water = 0;
	}
	age += hours;
}

void CatTest1() //è�Ĳ���
{
	CCat cat("MaoMi");
	cat.talk();

	ofstream out("out.txt");
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}

void CatTest2() //è�Ĳ���
{
	CCat cat("MaoMi");
	cat.eat(10);  //��10��ʳ��
	cat.drink(5); //��5��ˮ
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}

void CatTest3() //è�Ĳ���
{
	CCat cat("MaoMi");
	cat.eat(10);  //��10��ʳ��
	cat.drink(5); //��5��ˮ
	cat.sleep(4); //˯4Сʱ
	cat.sleep(2);
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}

void CatTest4() //è�Ĳ���
{
	CCat cat("MaoMi");
	cat.eat(10);  //��10��ʳ��
	cat.drink(5); // ��5��ˮ
	cat.sleep(4); //˯4Сʱ
	cat.sport(1); //�˶�1Сʱ
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}

void CatOneMonth()
{
	CCat cat("MaoMi");
	////////////////////////////////
	//���ٴ���Ӵ���,��������ɲ��Գ���Ȼ���ύ
	for (int day = 1; day <= 30; day++)
	{
		cat.sport(1);
		cat.eat(4);
		cat.drink(6);
		cat.sleep(4);
		cat.eat(6);
		cat.drink(4);
		cat.sport(2);
		cat.sleep(4);
		cat.sport(1);
		cat.eat(10);
		cat.drink(10);
		cat.sport(1);
		cat.sleep(6);
		cat.sport(1);
		cat.eat(6);
		cat.drink(6);
		cat.sleep(4);
	}

	///////////////////////////////
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}

int main()
{
	//��ע�⣬��Test1���ǰ�벻Ҫ�ύ�����������ж�
	cout << "///////////////////////Qestion1/////////////////" << endl;
	CatTest1();
	cout << "///////////////////////Qestion2/////////////////" << endl;
	CatTest2();
	cout << "///////////////////////Qestion3/////////////////" << endl;
	CatTest3();
	cout << "///////////////////////Qestion4/////////////////" << endl;
	CatTest4();
	cout << "///////////////////////Qestion5/////////////////" << endl;
	CatOneMonth();
	system("pause");
	return 0;
}
