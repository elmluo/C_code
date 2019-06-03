#include <iostream>

#if 0
函数占位参数

	占位参数只有参数类型声明, 没有参数名声明

	一般情况下，在函数体内部无法使用占位参数
 #endif

int func(int a, int b, int)
{
	return a + b;
}


#if 0
可以将占位参数与默认参数结合起来使用
	
	为以后程序扩展留下线索
	兼容C语言程序中可能出现的不规范写法

C++ 可以声明占位符参数，占位符参数一般用于程序扩展和对c代码的兼容
#endif

int func2(int a, int b, int = 0)
{
	return a + b;
}

int main(int argc, char const *argv[])
{
	// func(1, 2);	// error, 必须把最后一个参数补上
	printf("%d\n", func(1, 2, 3));

	// 如果默认参数和占位符一起，都能调用起来
	
	int a = func2(1, 2);
	int b = func2(1, 2, 3);

	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}










