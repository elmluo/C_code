/*
那么,为什么非const的引用不能使用相关类型初始化呢?

实际上,const 引用 使用相关类型对象初始化时发生了如下过程。
	int temp = val;
	const int &ref = temp;

如果ref不是const的, 那么改变ref值, 修改的是temp, 不是val。

 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	/*
	1. 用变量 初始化 常引用
	 */
	int x1 = 30;
	const int &y1 = x1;	// 用x1变量去初始化 常引用

	/*
	2. 用字面量 初始化 常量引用
	 */
	const int a = 40;	// c++编译器把a放在符号表中

	// int &m = 41;		// error, 普通引用, 引用无法引用一个字面量 请问字面量没有地址?
	
	const int &m = 43;	// c++ 编译器 会 分配内存
						// int temp = 43
						// const int &m = temp;
	return 0;

	/*
	结论：
		1 const int &e <==> const int * const e

		2 普通引用相当于 int * const e

		3 当使用常量(字面量) 对const引用进行初始化时候,C++编译器会为常量值分配空间, 并将引用名作为这段空间的别名

		4 使用字面量对const引用初始化后，将生成一个只读变量。
	 */
}

