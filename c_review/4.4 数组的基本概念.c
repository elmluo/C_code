#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 普通别名
typedef unsigned int u32;

// 数组的别名
// 为 int [10]这种数组起一个别名为ARRAY_INT_10; 
typedef int (ARRAY_INT_10)[10];

int main(int argc, char const *argv[])
{
	
	// 二维数组如果不初始化，元素内容都是乱码，
	// 未初始化完全，自动补零。
	int arr[3][2] = {
		{34, 23},
		{44, 67}
	};
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 2; ++j) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// 指向二维数组的指针，比较好理解的方式: (int [3][2]) * p
	int (*p)[3][2] = NULL;	// 指向二维数组 的指针。
	printf("p = %p, p + 1 = %p\n", p, p + 1);
	
	// 数组的别名
	ARRAY_INT_10 b; // int b[10];
	for(int i = 0; i < 10; ++i) {
		b[i] = i;
	}
	for(int i = 0; i < 10; ++i) {
		printf("%d\n", b[i]);
	}

	// 指向上面数组的指针
	ARRAY_INT_10 *d = &b;
	printf("d = %p, d + 1 = %p \n", d, d + 1);

	// &array == &array[0]
	// 两者相等只是两者重合了而已。
	// 两者不是同一个概念，不是一个类型。

	return 0;
}





