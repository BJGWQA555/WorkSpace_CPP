#include<iostream>
using namespace std;
class Graduate
{
	private:
		char *name;						//*
		char number[10];
		int score;
		char researchtopic[50];			//�о�����
		char advisor[10];
	public:
		Graduate();						//������������������
		Graduate(char* na, char* num, int sc, char* rt, char* adv);
		Graduate(const Graduate &gra);
		~Graduate();
		void Input();
		void OutputInfo();					//����о����ĵ������������Ϣ
		friend void OutputAversco(Graduate*,int num);	//�������о�����ƽ���ɼ�����
		friend void Grade(Graduate);		//��Graduate&difference
		Graduate & operator = (const Graduate &gra);
		void ptintfre();
};

