/*
变量名， 本身是一段内存的引用，即别名（alias）。引用可以看作一个 已定义变量 的别名
引用的语法: Type &name = var;

 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 10; 	// c编译器分配4个内存，a为内存空间的别名
	int &b = a;		// b就是a的别名
	a = 11;		// 直接赋值
	
	{
		int *p = &a;
		*p = 12;
		cout << a << endl;
	}

	b = 14;

	cout << "a = " << a << ", b=" << b << endl;
	
	return 0;
}
