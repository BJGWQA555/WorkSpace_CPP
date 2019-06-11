#include<iostream>
using namespace std;
class Graduate
{
	private:
		char *name;						//*
		char number[10];
		int score;
		char researchtopic[50];			//研究课题
		char advisor[10];
	public:
		Graduate();						//函数声明后勿忘定义
		Graduate(char* na, char* num, int sc, char* rt, char* adv);
		Graduate(const Graduate &gra);
		~Graduate();
		void Input();
		void OutputInfo();					//输出研究生的单项基本数据信息
		friend void OutputAversco(Graduate*,int num);	//输出多个研究生的平均成绩？？
		friend void Grade(Graduate);		//与Graduate&difference
		Graduate & operator = (const Graduate &gra);
		void ptintfre();
};

