#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_file_len(int file_len)
{
	file_len = 666666;
}

/**
 * 在函数中，由于函数变量在栈中，函数调用结束之后，
 * 函数内部定义变量，会被自动回收销毁。
 */
void get_file_len1()
{
	int file_len = 0;
	file_len = 3000;
	return file_len;
}

/**
 * 通过传入变量的地址，修改main函数中的变量
 * @param p [description]
 */
void get_file_len2(int *p)
{
	*p = 30;
	return 0;
}

int main(void)
{
	int file_len = 0;
	// get_file_len(file_len);
	// file_len = get_file_len1();
	get_file_len3(&file_len);
	return 0;
}