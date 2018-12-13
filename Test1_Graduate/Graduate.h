//	Graduate.h		//20xz 10tk 阅读6 * 5 设计10 * 4

#include<iostream>
#include<string>
using namespace std;

class Graduate
{
	private:
		char *name;
		char number[10];
		int score;
		char researchTopic[50];	//研究课题
		char advisor[10];
	public:
		Graduate();
		Graduate(char* na, char* num, int sc, char* re, char* adv);
		Graduate(const Graduate &gra);
		~Graduate();
		void Input();
		void Output1();
		void Output2();
};

