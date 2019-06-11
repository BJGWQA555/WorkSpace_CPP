/*************************************************
** 头文件   : Graduate.h
** 功能说明 : 研究生类定义
** 创建时间 : 2018-12-17/10:49
/**************************************************/
/*
（1）项目一：设计一个完整的研究生Graduate类（30分）
要求：类内含研究生姓名、学号、入学成绩（百分制）、研究领域和指导教师5个私有数据；
类的成员函数具备以下功能：
	初始化研究生数据（至少提供2种方式，如自力更生构造函数模式，拿来主义拷贝构造函数模式）、
	输出研究生对象的单项基本数据信息、
	输出多个研究生对象的平均成绩、
	重载运算符“=”使得该研究生类的对象可以直接进行对象间的赋值操作、
	以友元函数形式输出研究生对象的成绩等级（90分以上输出A,80-89分输出B，70-79分输出C,低于60分输出D)。
*/
#ifndef _GRADUATE_H_
#define _GRADUATE_H_

#include <string>
#include <iostream>
using namespace std;

class Graduate
{
	private:
		char *name;
		char *id;
		float score;
		char *research;
		char *tutor;
	public:
		//公有静态共享数据
		static int obj_count;    //累加类创建的对象数目
		static float obj_score;  //累加所有对象的总成绩

		//1.构造函数
		Graduate();
		Graduate(const char *na, const char *num, float score, const char *re, const char *tu);
		Graduate(const Graduate &r);	//拷贝构造函数形参:本类对象的常引用

		//1.析构函数
		~Graduate();

		//2.普通函数-基本函数
		char* getName();
		char* getID();
		float getScore();
		char* getResearch();
		char* getTutor();

		//3. 静态共享函数-计算所有对象的成绩均值
		static float obj_AverageScore();

		//4.普通函数-重载运算符函数=
		Graduate& operator=(const Graduate &r);

		//5.友元函数（类外函数），输出研究生成绩等级
		friend char OutputGrade(Graduate &stu);
};


#endif
