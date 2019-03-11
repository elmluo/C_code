#include <stdio.h>

#define MONTHS 12

/**
 * C99 增加了一个新特性: 指定初始化（designated initialize)
 * 利用该特性可以初始化指定数组元素。
 */
int main(int argc, char const *argv[])
{
	int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [3]=29};
	int i;
	for(i = 0; i < MONTHS; i++) {
		printf("%2d %d\n", i + 1, days[i]);
	}
	return 0;
}