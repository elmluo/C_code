/*
c++ 中的const修饰的, 是一个真正的常量， 而不是c中的变量(只读)。 在const修饰的常量编译期间，就已经确定下来了
 */
#include <iostream>
#define N 10;

int main(int argc, char const *argv[])
{
	const int a = 1;
	const int b = 2;
	int array[a + b] = {0};

	int i = 0;
	for(i = 0; i < (a + b); ++i) {
		printf("array[%d] = %d \n", i, array[i]);
	}
	return 0;
}