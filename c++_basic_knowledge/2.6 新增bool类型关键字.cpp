/*
c++中的布尔类型

c++ 在c语言的基础上增加了bool

c++中的bool可以取得值为true 和 false

理论上bool只占用一个字节

如果多个bool 变量定义在一起， 可能会各占一个bit，这取决于编译器的实现

true代表真值，编译器内用1来表示

false代表非真值，编译器内部用0来表示

bool类型只有true(非0) 和 false (0) 两个值

c++ 编译器会在赋值时将非0转化为true, 0值转化为false

 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int a;
	bool b = true;
	printf("b=%d, sizeof(b)=%d\n", b, sizeof(b));

	b = 4;
	a = b;
	printf("a = %d, b = %d\n", a, b );

	b = -4;
	a = b;
	printf("a = %d, b = %d\n", a, b );

	a = 10;
	b = a;
	printf("a=%d, b=%d\n", a, b);

	b = 0;
	printf("b=%d\n", b);

	return 0;
}