#include <iostream>
using namespace std;

class Location
{
	// 带参数的构造函数
	Location(int xx = 0, int yy = 0)
	{
		X = xx;
		Y = yy;
		cout << "Constructor Object." << endl;
	}

	// copy构造函数 完成对象的初始化
	Location(const Location & obj)	// copy构造函数
	{
		X = obj.X;
		Y = obj.Y;
		cout << "Copy Constructor." << endl;
	}

	~Location()
	{
		cout << X << ", " << Y << "Object destroyed." << endl;
	}

	int GetX()
	{
		return X;
	}

	int GetY() 
	{
		return Y;
	}
private:
	int X;
	int Y;
};

// g 函数 返回一个元素
// 结论1： 函数的返回值是一个元素（复杂类型的）, 返回的是一个新的匿名函数对象(所以会调用匿名函数对象类的copy)
// 
// 结论2：有关 匿名函数对象的去和留
// 如果用匿名对象 初始化 另外一个同类型的对象，匿名对象 转成有名对象
// 如果用匿名对象 赋值给 另外一个同类型的独享，匿名对象 被析构
// 
// 设计编译器的大牛：
// 我就给你们返回一个新对象（没有名字，匿名对象）
// 
Location g()
{
	Location temp(1, 2);
	return temp;
}

void test 1()
{
	g();
}

int main(void)
{
	return 0;
}

void test2()
{
	// 用匿名对象初始化m 此时c++ 编译器 直接把匿名对象转成m;(扶正)从匿名转成有名字了m
	// 就是将这个匿名对象起了名字m, 他们都是同一个对象
	Location m = g();
	printf("匿名对象, 被扶正，不会被析构掉 %s \n");
	cout << m.GetX() << endl;
}

void test3()
{
	// 用匿名对象 赋值给m2后， 匿名对象被析构
	Location m2(1, 2);
	m2 = g();
	printf("因为用匿名对象=给m2, 匿名对象, 被析构 \n");
	cout << m2.GetX() << endl;
}

int main(void)
{
	test1();
	test2();
	test3();
	return 0;
}