#if 0
一个函数不能既作重载，又做默认参数的函数.
当你少些一个参数时，系统无法确认是重载还是默认参数。
#endif

#include <iostream>
using namespace std;

int func(int a, int b, int c = 0)
{
	return a*b*c;
}

int func(int a, int b)
{
	return a + b;
}

int func(int a)
{
	return a;
}

int main(int argc, char const *argv[])
{
	int c = 0;

	// c = func(1, 2);		// error. 存在二义性， 调用失败， 编译不能通过

	int d = 0;

	d = func(1, 2, 3);	//=> 调用第一个
	printf("d=%d \n", d);
	printf("c=%d \n", c);

	return 0;
}
