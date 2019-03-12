#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

/**
 * 数组的表示法，其实是在很好的利用指针
 * 数组名字是元素的首地址
 * arr == &arr[0]; 两者都是常量，在程序运行的过程中不会改变
 */
int use_pointer_natation();
int main(int argc, char const *argv[])
{
	short dates[SIZE];
	short * pti;
	short index;
	double bills[SIZE];
	double * ptf;
	pti = dates;	// 把数组地址赋值给指针
	ptf = bills;
	printf("%23s %15s \n", "short", "double");
	for (index = 0; index < SIZE; index ++) {
		// 指针加减，等于加上指针指向类型的大小,(以字节为单位)。
		// 指针加1，是指增加一个一个储存单元。
		// dates + 2 == &dates[2] 相同的地址。
		// *(dates + 2) == dates[2] 相同的值。
		printf("ponters + %d: %10p %10p \n", index, pti + index, ptf + index);
	}
	use_pointer_natation();
	return 0;
}

int use_pointer_natation()
{
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i;
	for(i = 0; i < 12; ++i) {
		printf("Month %2d has %d days. \n", i + 1, *(days + i));
	}
	return 0;
}


