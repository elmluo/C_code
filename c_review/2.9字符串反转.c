#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char g_buf[128]={0}; // use global is not safe

int reverse(char *str) {
	if (str == NULL) {
		fprintf(stderr, "%s\n", "str == NULL");
		return -1;
	}
	char *begin = str;
	char *end = str + strlen(str) - 1;
	char temp = 0;
	while(begin < end) {
	    temp = *begin;
	    *begin = *end;
	    *end = temp;
	    begin++;
	    end--;
	}
	return 0;
}

/**
 * use recursion
 * @param  str [description]
 * @return     [description]
 */
int reverse1(char *str) {
	if(str == NULL){
		return -1;
	}
	if(*str == '\0') {
		return 0;
	}
	// printf("%c\n",*str ); // 先打印，再出栈, 打印的是当前函数的str。
	reverse1(str + 1);	// bcdef12345。
	// printf("%c", *str); // 先出栈，后打印, 打印的是str + 1。已经改变后的结果。
	strncat(g_buf, str, 1);
	return 0;
}

int reverse2(/*IN*/char *str, /*OUT*/char *outbuf) {
	if (str == NULL || outbuf == NULL){
		fprintf(stderr, "%s\n", "str = NULL || buf = NULL");
		return -1;
	}
	if(*str == '\0') {
		return 0;
	}
	reverse2(str + 1, outbuf);
	strncat(outbuf, str, 1);
	return 0;
}

int main(int argc, char const *argv[])
{
	// char *str = "abcdef" // wrong , variable of global area, can't be modify
	char str[] = "abcdef12345"; 
	char buf[128] = {0};
	reverse1(str);
	reverse2(str, buf);
	printf("\n");
	printf("reverse result1 is : %s\n", g_buf);
	printf("reverse2 result is: %s\n", buf);
	return 0;
}







