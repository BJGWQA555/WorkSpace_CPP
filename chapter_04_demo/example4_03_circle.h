#ifndef _circle 						//�������룬�����ظ�����
#define _circle 						//������Ҫ��������ͬ

class circle
{
  private:
	double radius;   				    //Բ�İ뾶
	const double PI; 				    //����һ�������ݳ�ԱPI����Բ����
  public:
	/**/
	circle(double r = 0) : PI(3.1415926) //ֻ��ͨ����ʼ���б��ʼ�������ݳ�Ա
	{
		radius = r;
	}
	/**/
	/*
	circle(double r = 0) 				//����expression must be a modifiable lvalue
	{
		PI=3.1415926;
		radius = r;
	}	
	*/
	double area();
	double circumference();
};
#endif