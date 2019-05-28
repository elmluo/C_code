/*
C++ 中的const常量类似于宏定义
	const int c = 5;  约等于 #define c 5

C++ 中的const常量与用定义不同
	const常量是由编译器处理的， 提供类型检查和作用域检查
	宏定义由预处理器处理，单纯的文本替换
 */

/*
c 语言中的const 变量
	C语言中const变量是只读变量, 有自己的存储空间
c++ 中的const变量
	可能分配存储空间，也可能不分配存储空间
	当const常量为全局的时候，并且需要在其他文件中使用，会分配存储空间。
	当使用&操作符，取const常量引用时, 也会分配存储空间,
	当const int &a = 10; const 修饰引用时， 也会分配存储空间

 */
#include <iostream>

void fun1()
{
	#define a 10	// 其他函数中可以获取到
	const int b = 20;	// 其他函数中不能获取到。
}

void fun2()
{
	printf("a=%d \n", a);
	// printf("b=%d \n", b);
}

int main(int argc, char const *argv[])
{
	fun1();
	fun2();
	return 0;
}