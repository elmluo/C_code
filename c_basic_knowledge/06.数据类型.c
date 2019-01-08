#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char const *argv[])
{	
	/*
	type of int
	 */
	printf("int 存储大小 : %lu \n", sizeof(int) );

	/*
	type of float
	 */
	printf("float 存储最大字节数 : %lu \n", sizeof(float) );
	printf("float 最大值: %E\n", FLT_MAX );
	printf("float 最小值: %e\n", FLT_MIN);
	printf("精度值: %d\n", FLT_DIG);

	/*
	type of void
		1. void function funcName () {}
		2. int funcName(void)
		3. void *malloc( size_t size );
	 */
	
	return 0;
}
