#include <stdio.h>
int main(int argc, char const *argv[])
{
	const int a = 10;
	int *p = (int *) & a;
	printf("a===> %d\n", a);
	
	* p = 11;
	printf("a===> %d\n", a);
	return 0;
}