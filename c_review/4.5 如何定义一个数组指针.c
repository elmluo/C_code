#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 数组指针这个部分的内容
 * 理解即可，业务当中真正用到的还是比较少的。
 */

void test()
{
	 // a 是一个指针， 指向 此二维数组的首元素（int [4]）的地址. int (*p)[4]; 二级指针，指向一个一维数组。
	 // &a 也是一个指针，指向 此二维数组（int[3][4]）的地址，int(*p)[3][4] ---> 三级指针，指向一个二维数组
	 // 一个数组指针，如果是几级指针，就是比它低一个维度的数组
	int a[3][4];

}

int main(int argc, char const *argv[])
{	
	// 在栈上开辟
	// char *point_array[4] = {NULL, NULL, NULL, NULL}

	// 在堆上开辟
	char *point_array[4] = {0};
	int i = 0;
	for(i = 0; i < 4; ++i) {
		point_array[i] = (char *)malloc(100);
	}

	/**
	 * 定义一个数组指针
	 * 方法1： 先定义一个数组，再根据数组定义一个指针
	 * @param  ARRAY_CHAR_4 [description]
	 * @return              [description]
	 */
	printf("方法2 \n");
	typedef char(ARRAY_CHAR_4)[4];
	ARRAY_CHAR_4 array = {0}; // (char[4]) array 是元素的首地址
	ARRAY_CHAR_4 *p = NULL;	 // 数组地址 (char[4])*p = NULL;
	p = &array;	// p赋值为数组元素首地址，p是数组指针。 &array --> (char[4]);
	for( int i = 0; i < 4; ++i) {
		(*p)[i] = i; // 给array的每一个元素赋值 注意p是数组的地址。 	
	}
	for( int i = 0; i < 4; ++i) {
		printf("%d\n", array[i]);
	}
	printf("%p\n", p);

	/**
	 * 方式2: 直接定义一个数组指针
	 */
	printf("方法2\n");
	typedef char(*ARRAY_CHAR_4_POINTER)[4];
	ARRAY_CHAR_4_POINTER array_pointer = &array;
	for(int i = 0; i < 4; ++i) {
		(*array_pointer)[i] = i;
	}
	for( int i = 0; i < 4; ++i) {
		printf("%d\n", array[i]);
	}

	/**
	 * 方法3：更加直接的定义
	 */
	printf("方法3 \n");
	char (*arr_p)[4] = NULL; // 直接定义一个数组指针
	arr_p = &array;
	for(int i = 0; i < 4; ++i) {
		(*arr_p)[i] = 20 - i;
	}
	for(int i = 0; i < 4; ++i) {
		printf("%d\n", array[i]);
	}


	return 0;
}
