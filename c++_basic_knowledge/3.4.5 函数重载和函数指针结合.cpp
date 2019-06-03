#if 0
函数重载与函数指针
	当使用函数重载函数名 对函数指针进行赋值时
	根据重载规则挑选与函数参数列表一致的候选者
	严格匹配候选者的函数类型与函数指针的函数类型
#endif

#if 0
函数指针基本语法
方法1：
	// 声明一个函数类型
	typedef void (myTypeFunc)(int a, int b)
	// 定义一个函数指针
	myTypeFunc *myfuncp = NULL;		// 定义一个函数指针，这个指针指向函数的入口地址

方法2：
	// 声明一个函数指针类型
	typedef void (*myPtypeFunc)(int a, int b);	
	// 定义一个函数指针
	myPTypeFunc fp = NULL;	// 通过 函数指针类型 定义了一个函数指针

方法3：
	// 定义一个函数指针 变量
	void (*myVarPFunc)(int a, intb);
#endif

#if 0
函数重载的总结
	重载函数在本质上是相互独立的不同函数
	函数的函数类型是不同的
	函数返回值不能作为函数重载的依据
	函数重载是由函数名和参数列表决定的
#endif

#include <iostream>
using namespace std;

int func(int x)		// int(int a)
{
	return x;
}

int func(int a, int b)
{
	return a + b;
}

int func(const char * s)
{
	return strlen(s);
}

typedef int(*PFUNC)(int a);		// int(*)(int a)
typedef int(*PFUNC2)(int a, int b);		// int(*)(int a, int b)

int main(int argc, char const *argv[])
{
	int c = 0;
	PFUNC p = func;
	c = p(1);

	printf("c=%d \n", c);

	PFUNC2 p2 = func;

	c = p2(1, 2);

	printf("c=%d \n", c);

	return 0;
}

