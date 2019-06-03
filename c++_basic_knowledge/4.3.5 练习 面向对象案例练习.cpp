#include <iostream>
using namespace std;

/*
设计立方体类(cube)，求出立方体的面积和体积
求两个立方体，是否相等（全局函数和成员函数）
 */
class Cube
{
private:
	double length;
	double width;
	double high;
public:
	void set_length_width_high(double l, double w, double h)
	{
		length = l;
		width = w;
		high = h;
	}
	double get_area() 
	{
		return 2*(length * width + length * high + width * high);
	}
	double get_volume()
	{
		return length * width * high;
	}
};

/*
设计一个圆形类（ AdvCircle），和一个点类（ Point），计算点在圆内部
还是圆外
即：求点和圆的关系（圆内和圆外）
实现，圆形坐标，半径；点的坐标
 */
class Point
{
private:
	double x;
	double y;
public:
	void setX_Y(double x, double y)
	{
		x = x;
		y = y;
	}

	double getX()
	{
		return x;
	}

	double getY()
	{
		return y;
	}
};

class AdvCircle
{
private:
	double x;
	double y;
	double r;
	Point p;	// 对象作为成员变量

public:
	void setX_Y_R_P(double x, double y, double r, Point &p)
	{
		x = x;
		y = y;
		r = r;
		p = p;
	}

	double get_distence()
	{
		return (x - p.getX()) * (x - p.getX()) + (y - p.getY()) * (y - p.getY());
	}

	void judge()
	{
		cout << get_distence() << endl;

		if (r * r < get_distence())
		{
			cout << "圆外" << endl;
		}
		else
		{
			cout << "圆内" << endl;
		}
	}
};

int main(int argc, char const *argv[])
{
	// 长方体的面积、体积
	Cube a;
	a.set_length_width_high(1.1, 2.2, 3.3);
	cout << "面积：" << a.get_area() << endl;
	cout << "体积：" << a.get_volume() << endl;

	// 求点在圆内还是圆外
	cout << "-----------------------" << endl;
	Point p;
	AdvCircle c;
	p.setX_Y(3.3, 3.3);
	c.setX_Y_R_P(1.5, 1.5, 2.6, p);  
	c.judge();

	return 0;
}
