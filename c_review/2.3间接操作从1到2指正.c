#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OUT
#define IN

int get_mem(OUT char **pp1, OUT char **pp2, OUT int *len_p1, OUT int *len_p2, IN int len1, IN int len2) 
{
	char *p1 = NULL;
	char *p2 = NULL;
	int temp_len1 = 0;
	int temp_len2 = 0;

	p1 = (char*)malloc(len1);
	if (p1 == NULL) {
		fprintf(stderr, "malloc p1 err\n");
		return -1;
	}
	memset(p1, 0, len1);

	p2 = (char*)malloc(len2);
	if (p2 == NULL) {
		fprintf(stderr, "malloc p2 err\n");
		return -1;
	}
	memset(p2, 0, len2);

	strcpy(p1, "123465789");
	temp_len1 = strlen(p1);

	strcpy(p2, "abcdefghijklmn");
	temp_len2 = strlen(p2);

	*pp1 = p1;
	*pp2 = p2;
	*len_p1 = temp_len1;
	*len_p2 = temp_len2;

	return 0;
}

int main(int argc, char const *argv[])
{
	char *p1 = NULL;
	char *p2 = NULL;
	int len1 = 0;
	int len2 = 0;
	int result = 0;
	result = get_mem(&p1, &p2, &len1, &len2, 200, 400);
	if (result != 0) {
		fprintf(stderr, "get men error: %d \n", result);
	}
	printf("p1: %s[%d], p2: %s[%d] \n", p1, len1, p2, len2);

	return 0;
}
