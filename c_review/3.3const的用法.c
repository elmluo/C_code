#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * c语言中const 只是起到了一个只读，参数注释的作用。
 * @param a [description]
 */
void const_test(const int *a /* 只读的 输入参数 */)
{
	*((int *)a) = 10; // 第一点const在C语言中毫无地位， 第二点 c语言中强转可以任意转换
}

void const_test2(int *const a, int *buf)
{
	// a++;
	*a = 20;	// const 不可直接修改，但是可以通过指针取值修改
}

void const_test3(const int* const a)
{
	// a++;
	// *a = 20;
}

int main(int argc, char const *argv[])
{	
	const int a;	// 代表一个常整型数
	int const b;	// 代表一个常整形，和上面一样。
	const char *c;  // 所指向的内存空间不能被修改，但是c本省可以修改
					// c++ 可以， 但是*c= ”123“ 不行。
					// 
	char *const d;	// 常指针 d++不行， 但是*d 内存空间可以被修改。
	const char *const e; // 一个指向常整形的常指针， e++ 不行，*e="1" 也不行。
	return 0;
}





