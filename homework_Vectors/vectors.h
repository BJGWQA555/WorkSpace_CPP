/*************************************************
* Head File   : vectors.h
* File Usage  : 向量类
* Create Time : 2018-12-17/16:34
/**************************************************/
/*
*
（2）项目二：设计一个二维空间下的向量Vectors类（20分）
要求：类内包含2个私有数据，即横坐标维度x和纵坐标维度y；
该向量类具有的功能：
	可以初始化向量对象数据成员、
	输出向量对象的数据成员、
	以成员函数形式重载运算符“+”实现两个向量对象的求和操作、
	以友元函数形式重载运算符“-”实现两个向量对象的求差操作。
*/
#ifndef __VECTORS_H__
#define __VECTORS_H__

#include <iostream>
using namespace  std;

//---------------------定义vectors类-----------------
class vectors
{
	private:
		float x;
		float y;
	public:
		vectors();
		vectors(float _x, float _y);
		vectors(const vectors &r);

		~vectors();

		float getX();
		float getY();

		//成员函数形式重载运算符+（只需要提供1个对象参数）
		vectors& operator+(const vectors &other);

		//友元函数形式重载运算符-（需要提供2个参数）
		friend vectors& operator-(const vectors &r1, const vectors &r2);
};
#endif

