#if 0
class 封装的本质
	在于将数据的行为，绑定在一起然后，能通过对象来完成操作
#endif

#if 0
Date类 访问自己的成员，可以不需要传引用的方式
封装有2层含义（把属性和方法进行封装 对属性和方法进行访问控制）
Public 成员变量和成员函数，可以在类的内部和外部访问。
Private 成员变量和函数，只能在类的内部被访问。
#endif

#if 0
struct和class关键字区别
在用struct定义类时, 所有成员的默认属性为public
在用class定义类时，所有成员默认属性为private
#endif

#if 0
面向对象与面向过程
	面向对象: 狗.吃（屎）
	面向过程:	 吃（狗，屎）	
#endif

#include <iostream>
using namespace std;

class Date
{
public:
	void init(Date &d);
	void print(Date &d);
	bool isLeapYear(Date & d);
private:
	int year;
	int month;
	int day;
};

void Date::init(Date &d)
{
	cout << "year, month, day: " << endl;
	cin >> d.year >> d.month >> d.day;
}

void Date::print(Date &d)
{
	cout << "year month day" << endl;
	cout << d.year << ": " << d.month << ": " << d.day << endl;
}

bool Date::isLeapYear(Date &d)
{
	if ((d.year % 4 == 0 && d.year % 100 == 0) || d.year % 400 == 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main(int argc, char const *argv[])
{
	Date d;
	d.init(d);
	d.print(d);
	if (d.isLeapYear(d))
		cout << "leap year" << endl;
	else 
		cout << "not leap year " << endl;
	return 0;
}

