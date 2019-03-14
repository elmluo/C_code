#include <stdlib.h>
#include <stdio.h>

int sum (int *start, int *end)
{	
	if(start == NULL || end == NULL) {
		fprintf(stderr, "%s\n", "start == NULL || end == NULL");
		return -1;
	}

	int total = 0;

	while(start < end)
	{
		total += *start;
		start++;
	}

	return total;
}

int sum2(int *start, int *end)
{
	if(start == NULL || end == NULL) {
		fprintf(stderr, "%s\n", "start == NULL || end == NULL");
		return -1;
	}
	int total = 0;
	while(start < end)
	{
		total += *start++;
	}
	return total;
}

int main(int argc, char const *argv[])
{
	int marbles[] = {3,4,5,6,7,8,9,10,22,34};
	int len = sizeof(marbles)/sizeof(marbles[0]);
	int total = 0;
	int total2 = 0;
	total = sum(marbles, marbles + len);
	total2 = sum2(marbles, marbles + len);
	printf("result is : %d \n", total);
	printf("result2 is : %d \n", total2);
	return 0;
}