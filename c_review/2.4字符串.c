#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{	
	/**
	 * there is no type of 'String' in C language,
	 * Add '\0' after successive character arrays, to define 'String'
	 */
	
	printf("123456");
	// char str1[] = "abcd"; // 5, string ( has hidden “\0” )
	char str1[] = {'a', 'b', 'c', 'd', '\0'};	// 
	// char str1[] = {'a', 'b', 'c', 'd'};
	char *str2 = "abcd"; // 4 pointer
	char str3[128] = {'x', 'y', 'z'};	// 默认是0

	int i = 0;
	for (i = 0; i < 128; i++) 
	{
		// printf("%d", str3[i]);
		printf("%d", str3[i]);
	}
	printf("str1: %s \n", str1);
	printf("str3: %s \n", str3);
	printf("\n");


	printf("-------------------------\n");
	printf("strlen(str2): %d\n", strlen(str2));	// 4
	printf("strlen(str3): %d\n", strlen(str3));	// 3
	printf("sizeof(str2): %d\n", sizeof(str2)); // 8(64位)
	printf("sizeof(str3): %d\n", sizeof(str3)); // 128

	// traversal through subscripts
	int len = strlen(str1);
	for ( i = 0; i < len; i++)
	{
		printf("%c\n", str1[i]); 
	}

	//  traversal through pointer;
	char *p = NULL;
	p = str1;
	for ( i = 0; i < len; i++, p++)
	{
		printf("%c\n", *p);
	}

	// comparer will translate array to pointer;
	// p = str; p[0] --> p[0 + i] --> p(0 + i) --> *(p + i)
	// p[i][j] --> p[i](0 + j) --> *(p[i] + j) --> *(*(p + i) + j)

	return 0;
}