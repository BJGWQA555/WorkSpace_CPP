//#pragma once		//头文件只编译一次
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
	string name; //名字
	int food;	//食物
	int water;   //水
	int weight;  //体重
	int age;	 //年龄
	//这里仅是列出必须的函数，函数体请自行添加
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

void CatTest1() //猫的测试
{
	CCat cat("MaoMi");
	cat.talk();

	ofstream out("out.txt");
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}

void CatTest2() //猫的测试
{
	CCat cat("MaoMi");
	cat.eat(10);  //吃10点食物
	cat.drink(5); //喝5点水
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}

void CatTest3() //猫的测试
{
	CCat cat("MaoMi");
	cat.eat(10);  //吃10点食物
	cat.drink(5); //喝5点水
	cat.sleep(4); //睡4小时
	cat.sleep(2);
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}

void CatTest4() //猫的测试
{
	CCat cat("MaoMi");
	cat.eat(10);  //吃10点食物
	cat.drink(5); // 喝5点水
	cat.sleep(4); //睡4小时
	cat.sport(1); //运动1小时
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
	//请再此添加代码,请自行完成测试程序，然后提交
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
	//请注意，在Test1完成前请不要提交，否则会出现中断
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
