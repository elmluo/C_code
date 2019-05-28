/*
1. 当函数返回值为引用的时候，
	若返回栈变量
		不能成为其他引用的初始值(不能作为左值使用)
2. 引用作为函数返回值
	如果返回值为引用可以当做左值
		如果返回值为普通变量，不可以当左值

 */

#include <iostream>
using namespace std;

int getA1()
{
	int a;
	a = 10;
	return a;
}

int& getA2()
{
	int a;
	a = 10;
	return a;
}

int main(int argc, char const *argv[])
{
	int a1 = 0;
	int a2 = 0;

	// 值拷贝
	a1 = getA1();

	// 将引用赋值给一个变量，会有拷贝动作
	// 理解：编译器类似做了以下隐藏操作，a2 = *(getA2())
	a2 = getA2();

	// 将一个引用赋值给另外一个引用作为初始值，由于是栈的引用，内存非法
	int &a3 = getA2();
	cout << "a1 = " << a1 << endl;
	cout << "a2 = " << a2 << endl;
	cout << "a3 = " << a3 << endl;
	
	return 0;
}
