#include <iostream>
using namespace std;

class circle
{
public:
	double r;
	double pi = 3.14159;
	double area = pi * r * r;
};

int main(void)
{
	circle pi;
	cout << "请输入area" << endl;
	cin >> pi.r;
	cout << pi.area << endl;	// 乱码
	return 0;
}
//=> 从内存四区的角度，解释为什么会出现error，理解为什么需要成员函数。