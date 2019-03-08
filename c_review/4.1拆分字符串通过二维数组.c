#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * 有一个字符串符合以下特征（“abcdef,acccd,eeeee,e3eeeee,sssss”）
 * 写两个函数(API), 输出以下结果
 * 第一个API
 * 	1.以逗号分隔字符串，形成二维数组，并且输出
 * 	2.把二维数组运算结果也传出
 *
 * 第二个API
 * 	1.以逗号分隔字符串，形成一个二级指针。
 * 	2.把一共拆分多少字符串个数输出
 *
 */

int spitString(char *str, char ch, char array[][30], int *count)
{
	char *p = str;
	char *q = p;
	int temp_count = 0;
	int len = 0;

	if (str == NULL || array == NULL || count == NULL) {
		fprintf(stderr, "str == NULL || array == NULL || count == NULL\n");
		return -1;
	}

	while ((p = strchr(p, ch)) != NULL) {
		strncpy(array[temp_count], q, p - q);
		array[temp_count][p - q] = '\0';
		temp_count++;
		p++;
		q = p;
		if (*p == '\0') {
			break;
		}
	}

	if (*q != '\0') {
		len = (str + strlen(str)) - q;
		strncpy(array[temp_count], q, len);
		array[temp_count][len] = '\0';
		temp_count++;
	}

	*count = temp_count;

	return 0;
}

int main(void)
{
	char *str = "abcdef,acccd,eeee,aaaa,e3eeee,ssss,dfdfdfdf";
	char array[10][30];
	int count = 0;
	int retn = 0;
	int i = 0;

	retn = spitString(str, ',', array, &count);

	if (retn < 0) {
		fprintf(stderr, "spitString er\n");
		return -1;
	}

	for (i = 0; i < count; i++) {
		printf("array[%d]:%s\n", i, array[i]);
	}

	return 0;
}