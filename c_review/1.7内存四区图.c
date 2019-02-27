#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * stack
 * @return [description]
 */
int demo() 
{
	int a = 10;  // life cycle of variable is same as function;
	return 0;
}

/**
 * heap
 * @param  size [description]
 * @return      [description]
 */
char *get_memory(int size)
{
	char *p = NULL; 
	p = (char*) malloc(size);
	if (p == NULL) {
		fprintf(stderr, "malloc %d err\n", size);
		return NULL;
	}
	memset(p, 0, size);
	return p;
}

int main(int argc, char const *argv[])
{
	char * main_p = NULL;
	main_p = get_memory(100);
	if (main_p == NULL) {
		fprintf(stderr, "%s\n", "p == NULL");
		return -1;
	}
	strcpy(main_p, "123456");
	printf("%s\n", main_p);

	return 0;
}