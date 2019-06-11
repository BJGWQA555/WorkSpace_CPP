/*************************************************
** 源文件   : Graduate.cpp
** 功能说明 : Function Definations
** 创建时间 : 2018-12-17/15:51
/**************************************************/
#include "Graduate.h"

int Graduate::obj_count = 0;						//静态数据成员初始化
float Graduate::obj_score = 0.0;
/*---------------------------第一类函数-----------------------------------*/
//1.构造函数
//无参构造函数
Graduate::Graduate()
{
	cout << "empty Graduate() is called" << endl;
	obj_count++; 			//只要创建对象，就在构造函数里累加一次
}

//普通有参构造函数
Graduate::Graduate(const char *na, const char* num, float sc, const char *re, const char *tu)
{
	cout << "General Graduate() is called" << endl;
	obj_count++; //只要创建对象，就在构造函数里累加一次
	
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	else name = 0;

	if (num)
	{
		id = new char[strlen(num) + 1];
		strcpy(id, num);
	}
	else id = 0;

	score = sc;
	obj_score += score;  //统计每个对象的总成绩

	if (re)
	{
		research = new char[strlen(re) + 1];
		strcpy(research, re);
	}
	else research = 0;

	if (tu)
	{
		tutor = new char[strlen(tu) + 1];
		strcpy(tutor, tu);
	}
	else tutor = 0;
}

//拷贝构造函数
Graduate::Graduate(const Graduate &r)
{
	cout << "copy Graduate() is called" << endl;
	obj_count++;
	
	if (r.name)	//拷贝name
	{
		name = new char[strlen(r.name) + 1];	//注意：不要用sizeof(r.name),因为它是算变量字节的，不是算长度的
		strcpy(name, r.name);
	}
	else name = 0;

	if (r.id)	//拷贝学号
	{
		id = new char[strlen(r.id) + 1];
		strcpy(id, r.id);
	}
	else id = 0;

	score = r.score;	//拷贝成绩
	obj_score += score;  //累加每个对象的总成绩

	if (r.research)		//拷贝研究领域
	{
		research = new char[strlen(r.research) + 1];
		strcpy(research, r.research);
	}
	else research = 0;

	if (r.tutor)	//拷贝导师
	{
		tutor = new char[strlen(r.tutor) + 1];
		strcpy(tutor, r.tutor);
	}
	else tutor = 0;
}
/*---------------------------第二类函数-----------------------------------*/
//1.析构函数
Graduate::~Graduate()
{
	cout << "~Graduate() is called" << endl;
	if (name)
	{
		delete []name;
	}

	if (id)
	{
		delete []id;
	}
	if (research)
	{
		delete []research;
	}

	if (tutor)
	{
		delete []tutor;
	}
	getchar();
}

/*---------------------------第三类函数-----------------------------------*/

//2.普通函数-基本函数
char* Graduate::getName()		//类型在最前
{
	return name;
}
char* Graduate::getID()
{
	return id;
}
float Graduate::getScore()
{
	return this->score;
}
char*  Graduate::getResearch()
{
	return research;
}
char*  Graduate::getTutor()
{
	return tutor;
}

//3.类的静态成员函数
float Graduate::obj_AverageScore()
{
	return float(obj_score / obj_count);  //强制转换
}

//4.成员函数形式重载赋值运算符函数=
Graduate&  Graduate::operator=(const Graduate &r)
{
	cout << "operator=() is called" << endl;

	if (name)//拷贝姓名
	{
		delete []name;
	}
	if (r.name)
	{
		name = new char[strlen(r.name) + 1];
		strcpy(name, r.name);
	}
	else name = 0;

	if (id)//拷贝学号
	{
		delete []id;
	}
	if (r.id)
	{
	     id = new char[strlen(r.id) + 1];
		strcpy(id, r.id);
	}
	else id = 0;

	
	score = r.score;//拷贝成绩
	obj_score += score;  //统计每个对象的总成绩

	if (research)//拷贝研究领域
	{
		delete []research;
	}
	if (r.research)
	{
		research = new char[strlen(r.research) + 1];
		strcpy(research, r.research);
	}
	else research = 0;
	
	if (tutor)//拷贝导师
	{
		delete []tutor;
	}
	if (r.tutor)
	{
		tutor = new char[strlen(r.tutor) + 1];
		strcpy(tutor, r.tutor);
	}
	else tutor = 0;
	
	return *this;
}

/*---------------------------第四类函数-----------------------------------*/

//5.类外函数-友元函数
char OutputGrade(Graduate &stu)
{
	char temp;
	if (stu.getScore() >= 90)
	{
		temp = 'A';			// ' 
	}
	else if (stu.getScore() >= 80)
	{
		temp = 'B';
	}
	else if (stu.getScore() >= 70)
	{
		temp = 'C';
	}
	else if (stu.getScore() >= 60)
	{
		temp = 'D';
	}
	else
	{
		temp = 'E';
	}
	cout << "该研究生成绩"<<stu.getScore()<<", 等级：" << temp << endl;
	return temp;//
}


