/*
合理的利用const的好处；
1. 指针做函数参数，可以有效的提高代码可读性，减少bug；
2. 清除的分清参数的输入和输出特性

int setTeacher_err( const Teacher *p)
Const 修改形参的解释后，在利用形参不能修改指针所指向的内存空间。

 */

#include <iostream>

int main(int argc, char const *argv[])
{
	// const 定义常量 ---> const 意味只读
	const int a;
	int const b;
	//=> 第一个和第二个意思一样， 代表一个常整形数
	
	const int *c;
	//=> 第三个 c是一个指向常整形数的指针(所指向的内存数据不可被修改，但是本省可以修改)
	
	int * const d;
	//=> 第四个 d 是一个常指针 （指针变量不可被修改，但是所指向的内存可以被修改）
	
	const int * const e;
	// 第5 个是指向 常整形 的 常指针 （指针和它所指向的内存空间，均不可被修改）
	return 0;
}