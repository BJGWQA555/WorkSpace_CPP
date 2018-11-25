#ifndef _circle 						//条件编译，避免重复包含
#define _circle 						//宏名不要与类名相同

class circle
{
  private:
	double radius;   				    //圆的半径
	const double PI; 				    //定义一个常数据成员PI代表圆周率
  public:
	/**/
	circle(double r = 0) : PI(3.1415926) //只能通过初始化列表初始化常数据成员
	{
		radius = r;
	}
	/**/
	/*
	circle(double r = 0) 				//报错：expression must be a modifiable lvalue
	{
		PI=3.1415926;
		radius = r;
	}	
	*/
	double area();
	double circumference();
};
#endif