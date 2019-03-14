#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * 1、有一个字符串“1a2b3d4z” ；
	要求写一个函数实现如下功能：
	功能1：把偶数位字符挑选出来，组成一个字符串1。
	功能2：把奇数位字符挑选出来，组成一个字符串2。
	功能3：把字符串1和字符串2，通过函数参数，传送给main，并打印。
	功能4：主函数能测试通过。
 * @param  source [description]
 * @param  buf1   [description]
 * @param  buf2   [description]
 * @return        [description]
 */
int	getStr1Str2(char *source, char *buf1, char *buf2)
{
	if (source == NULL || buf1 == NULL || buf2 == NULL) {
		fprintf(stderr, "%s\n", "source = NULL || buf1 == NULL || buf2 == NULL");
		return -1;
	}
	char * p = source;
	char * p1 = buf1;
	char * p2 = buf2;
	int count = 0;
	while( *p != '\0') {
	    (count++ % 2 == 1) ? *p1++ = *p++ : *p2++ = *p++;
	}
	printf("buf1: %s\n", buf1);
	printf("buf2: %s\n", buf2);
	return 0;
}
int getStr1Str2UseRecursion(char *source, char *buf1, char *buf2, int count)
{
	if (source == NULL || buf1 == NULL || buf2 == NULL) {
		fprintf(stderr, "%s\n", "source = NULL || buf1 == NULL || buf2 == NULL");
		return -1;
	}
	if (*source == '\0') {
		return 0;
	}
	if (count % 2 == 0) {
		*buf1 = *source;
		// printf("%c\n", *buf1);
		buf1++;
		source++;
	} else {
		*buf2 = *source;
		// printf("%c\n", *buf2);
		buf2++;
		source++;
	}
	count++;
	getStr1Str2UseRecursion(source, buf1, buf2, count);
	return 0;
}

int main(int argc, char const *argv[])
{	
	char str[] = "1a2b3d4z";
	char buf1[128] = {0};
	char buf2[128] = {0};
	// getStr1Str2(str, buf1, buf2);
	getStr1Str2UseRecursion(str, buf1, buf2, 0);
	printf("buf1: %s\n", buf1);
	printf("buf2: %s\n", buf2);
	/* code */
	return 0;
}









