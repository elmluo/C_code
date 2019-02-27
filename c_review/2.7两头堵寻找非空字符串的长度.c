#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int get_no_space_count(/*IN*/ char *str, /*OUT*/ int *res_count)
{
	if (str == NULL || res_count == NULL)
	{
		fprintf(stderr, "%s\n", "str == NULL || res_count == NULL");
		return -1;
	}
	char *p = NULL;
	char *q = NULL;
	int count = 0;
	p = str;
	q = str + strlen(str) - 1;
	// while(*p == ' ' && p != '\0') 
	while(isspace(*p) && p != '\0') 
	{
		p++;
	}
	// while(*q == ' ' && q > p)
	while(isspace(*q) && q > p)
	{
		q--;
	}
	count = q - p + 1;
	*res_count = count;

	return 0;
}

int main(int argc, char const *argv[])
{
	char *str = "   abcdefghijklmn    ";
	int count = 0;
	get_no_space_count(str, &count);

	printf("the count: %d\n", count);

	return 0;
}