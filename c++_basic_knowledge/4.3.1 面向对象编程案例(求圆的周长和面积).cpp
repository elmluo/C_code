#include <iostream>
using namespace std;

/*
结构化方法编程，求圆的周长和面积
 */
int printCircle() 
{
	double r, girth, area;
	const double PI = 3.1415;
	cout << "Please input radius: \n";  	// 操作符重载
	cin >> r;
	girth = 2 * PI * r;
	area = PI * r * r;
	cout << "radius = " << r << endl;
	cout << "girth = " << girth << endl;
	cout << "area = " << area << endl;
	return 0;
}

class Circle
{
private:
	double radius;	// 成员变量
public:	
	void Set_Radius(double r)	// 通过成员函数，设置成员变量
	{
		radius = r;
	}
	double Get_Radius()		// 通过成员函数，访问成员变量
	{
		return radius;
	}
	double Get_Girth()
	{
		return 2 * 3.14f * radius;
	}
	double Get_Area()
	{
		return 3.14f * radius * radius;
	}
};

int main(int argc, char const *argv[])
{
	// printCircle();
	Circle A, B;	// 用类定义对象
	A.Set_Radius(6.3); 	// 类的调用
	cout << "A.Radius = " << A.Get_Radius() << endl;
	cout << "A.Girth = " << A.Get_Girth() << endl;
	cout << "A.Area = " << A.Get_Area() << endl;

	B.Set_Radius(10.5);
	cout << "B.Radius = " << B.Get_Radius() << endl;
	cout << "B.Girth = " << B.Get_Girth() << endl;
	cout << "B.Area = " << B.Get_Area() << endl;
	return 0;
}
// => 建立类、对象、成员变量、成员函数、输入和输出流的基本概念。

