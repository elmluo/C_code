#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int spitString(char *str, char ch, char ***array_p, int *count)
{
	if(str == NULL || array_p == NULL || count == NULL)
	{ 
		fprintf(stderr, "%s\n", "str == NULL || array_p = NULL || count == NULL");
		return -1;
	}
	char *p = str;
	char *q = p;
	int temp_count = 0;
	// "abcdef,acccd,eeee,aaaa,e3eeee,ssss,dfdfdfdf"
	// 	q	   p
	
	while(p = strchr(p, ch) != NULL) {
	    temp_count++;
	    p++;
	    q = p;
	    if (*p == '\0')
	    {
	    	break;
	    }
	}
	if (*q != '\0')
	{
		temp_count++;
	}
	// 1. 求出字符串中拆分的个数
	// 2. 根据个数开辟指针数组在堆上
	// 3. 拆分字符串， 为每一个指针开辟堆空间 拷贝字符串
	return 0;
}

int main(int argc, char const *argv[])
{
	char *str = "abcdef,acccd,eeee,aaaa,e3eeee,ssss,dfdfdfdf";
	char **array = NULL;


	return 0;
}