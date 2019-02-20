#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * [
 * 1.初始化变量 num = 0; int *p = null;
 * 2.给指针变量赋值地址 p = &num;
 * 3.间接修改变量num；*p = 2;
 * ]
 * @param  p [description]
 * @return   [description]
 */

int change_value(int *p)
{
	*p = 41;
	return 0;
}

int main(void)
{
	printf("超哥哥");
	int num = 0;
	int *p = NULL;
	change_value(&num);
	
	getChar();
	return 0;
}
