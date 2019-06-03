#if 0
当单一变量无法完成表述需求的时候，结构体类型解决了这一个问题.
可以将多个类型打包成一体，形成新的类型。 这是C语言中的封装概念。

C语言中的结构体操作，都是通过外部函数来实现的
	void init (Date &d)
	void print (Date &d)
	void isLeapYear (Date &d)
#endif

#include <iostream>
using namespace std;

struct Date
{
	int year;
	int month;
	int day;
};

void init(Date &d)
{
	cout << "year, month, day: " << endl;
	cin >> d.year >> d.month >> d.day;
}

void print(Date &d)
{
	cout << "year month day" << endl;
	cout << d.year << d.month << d.day << endl;
}

bool isLeapYear(Date &d)
{
	if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
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
	init (d);
	print(d);

	if (isLeapYear(d))
		cout << "leap year" << endl;
	else
		cout << "not leap year" << endl;
	return 0;
}